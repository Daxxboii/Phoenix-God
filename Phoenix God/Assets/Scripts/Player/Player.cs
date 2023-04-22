using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    public static Player Singleton;


    #region Callbacks
    public delegate void ChangedPlanes();

    public static ChangedPlanes PlanesHaveChanged;
    public static ChangedPlanes ResetWorld;
    #endregion


    [Header("Float Values")]
    [SerializeField, Range(0, 100)]
    public float ForwardPlayerSpeed;
    [Range(0f, 5f)]
    public float FlyHeight;

    [SerializeField,Range(0,100),Header("Sun Movement")]
    private float SunUpForceMax,SunDownSpeedMax,SunUpForceInitial,SunDownSpeedInitial;

    

    [Range(0f, 100f)]
    private float SunUpForce;

    [Range(0f, 5f)]
    private float SunDownSpeed;

    // float HourglassProgress;

    // float timer;

    [HideInInspector]
    public int LRIndex;

    private int PlaneIndex;

    [Header("Colors")]
    public Color Black;

    public Color yellow;

    [Header("Vectors")]
    public Vector3

            SunUpPosition,
            SunDownPosition,
            SunStartPosition;

    private Vector3 ClampedSunPos;

    private Vector3 UpdatedPlayerPos;

    Collider[] hitColliders;

    [Header("Booleans")]
    // public bool UsedUpSunPower;

    // public bool KillTween = false;

    [HideInInspector]
    public bool PerformedStep;

    [SerializeField]
    private bool is_Gliding;

    public static int

            ResetIndex;

    bool

            ResettingSun,
            IsSunPoweredUp;

    bool NextMove;

    [Header("References")]
    public GameObject Phoenix;
    public GameObject StartupPlane;

    /* public Image

             HourGlassOuter,
             HourGlassInner;*/

    [SerializeField]
    public Animator Player_Animator;

    [SerializeField]
    private GameManager _GameManager;

    [SerializeField]
    private SkinnedMeshRenderer Renderer;
    [SerializeField]private MeshRenderer TailRenderer;

    public GameObject Sun;

    public AlternateWorldGenerator GeneratorScript;

    public Material

            FadePath, Sky;
    

    private GameObject PreviousPlane;

    private float SkyExposure;

    private RaycastHit hit;

    private Vector3 Sunpos;

    void Awake()
    {
        if (Singleton == null) Singleton = this;
    }

    public void Start() 
    {
        resetDifficulty();
        ResetSunInstantly();
        LRIndex = 0;
        PlaneIndex = 0;
       // Sun.transform.localPosition = new Vector3(0, -15f, 745.8f);
        RenderSettings.fogColor = yellow;
        NextMove = GeneratorScript.AllDirections[0];
        Player_Animator.SetBool("Gliding", false);
        Phoenix.transform.rotation = Quaternion.identity;
        ResetIndex = 1;
        IsSunPoweredUp = false;
        ResettingSun = false;
        PreviousPlane = null;
        InputManager.CanReceiveInput = false;
        UpdatedPlayerPos = GeneratorScript.TurnPositions[LRIndex];
        UpdatedPlayerPos.y += FlyHeight;
        transform.position = UpdatedPlayerPos;
        SetMeshVis(true);
        StartupPlane.SetActive(true);

    }

    public void resetDifficulty()
    {
        SunDownSpeed = SunDownSpeedInitial;
        SunUpForce = SunUpForceInitial;
    }

    void ResetSun()
    {
        Sunpos = Sun.transform.localPosition;
        Sunpos.y += SunUpForce;
        Sun.transform.localPosition =
            Vector3
                .Lerp(Sun.transform.localPosition,
                Sunpos,
                Time.deltaTime * 5);

        ClampedSunPos = Sun.transform.localPosition;
        ClampedSunPos.y =
            Mathf.Clamp(ClampedSunPos.y, SunDownPosition.y, SunUpPosition.y);
        Sun.transform.localPosition = ClampedSunPos;

        RenderSettings.fogColor =
            Color
                .Lerp(RenderSettings.fogColor,
                yellow,
                Time.deltaTime * 50);
        // SkyExposure = Mathf.Lerp(SkyExposure, 1, Time.deltaTime * SunDownSpeed * 50);
        // RenderSettings.skybox.SetFloat("_Exposure", SkyExposure);
    }

    void FixedUpdate()
    {
        if (_GameManager.isPlaying)
        {

            if (!ResettingSun && !IsSunPoweredUp)
            {
                Sun.transform.localPosition =
                    Vector3
                        .Lerp(Sun.transform.localPosition,
                        SunDownPosition,
                        Time.deltaTime * SunDownSpeed);
                RenderSettings.fogColor =
                    Color
                        .Lerp(RenderSettings.fogColor,
                        Black,
                        Time.deltaTime * SunDownSpeed);
                // SkyExposure = Mathf.Lerp(SkyExposure, 0.5f, Time.deltaTime * SunDownSpeed * 50);
                //  RenderSettings.skybox.SetFloat("_Exposure", SkyExposure);
            }
            else
            {
                ResetSun();
            }
            if (Sun.transform.localPosition.y <= SunDownPosition.y + 10)
            {
                if (ResetIndex == 1 || ResetIndex == 2)
                {
                    ResetWorld.Invoke();
                }
                else
                {
                    _GameManager.GameOver();
                }
            }
        }
        UpdatedPlayerPos = GeneratorScript.TurnPositions[LRIndex];
        UpdatedPlayerPos.y += FlyHeight;
        transform.position =
            Vector3
                .Lerp(transform.position,
                UpdatedPlayerPos,
                Time.deltaTime * ForwardPlayerSpeed);

    }


    #region Movement

    public void Move()
    {
        
        if (_GameManager.isPlaying)
        {
            if (PerformedStep == NextMove)
            {
                if (SunDownSpeed < SunDownSpeedMax) SunDownSpeed += 0.3f;
                if (SunUpForce > SunUpForceMax) SunUpForce -= 10f;

                //if (PreviousPlane != null) PreviousPlane.SetActive(true);
                StartCoroutine(Fading());

                TurnPlayer(PerformedStep);

                PlanesHaveChanged.Invoke();
                Player_Animator.SetBool("Gliding", true);
                
                LRIndex++;
                NextMove = GeneratorScript.AllDirections[LRIndex];

                StartCoroutine(SunDown());
            }
            else
            {
                if (ResetIndex == 1 || ResetIndex == 2)
                {
                    ResetWorld.Invoke();
                }
                else
                {
                    _GameManager.GameOver();
                }
            }
        }
       // Debug.Log("DownSpeed: "+SunDownSpeed+"\n Up Factor: "+SunUpForce);
    }

    public void TurnPlayer(bool value)
    {
        if (value)
        {
            Phoenix.transform.rotation =
                transform.rotation * Quaternion.Euler(0, 30, 0);
        }
        else
        {
            Phoenix.transform.rotation =
                transform.rotation * Quaternion.Euler(0, -30, 0);
        }
    }
    #endregion


    public void SetMeshVis(bool value)
    {
        Renderer.enabled = value;
        TailRenderer.enabled = value;
    }

    IEnumerator SunDown()
    {
        ResettingSun = true;
        yield return new WaitForSeconds(0.1f);
        ResettingSun = false;
    }

    IEnumerator Fading()
    {
        yield return new WaitForSeconds(0.05f);

        if (GameManager.GameManagerInstance.isPlaying)
        {
            if(PlaneIndex==0)StartupPlane.SetActive(false);
            if (GeneratorScript.AllPlanes[PlaneIndex + 1].tag == "Curve")
            {
                GeneratorScript.AllPlanes[PlaneIndex].GetComponentInChildren<MeshRenderer>().enabled = false;
                PlaneIndex++;
            }

            GeneratorScript.AllPlanes[PlaneIndex].GetComponentInChildren<MeshRenderer>().sharedMaterial = FadePath;
            GeneratorScript.AllPlanes[PlaneIndex-1].GetComponentInChildren<MeshRenderer>().enabled = false;
           // if(GeneratorScript.AllPlanes.Count>4)GeneratorScript.AllPlanes[PlaneIndex-2].GetComponentInChildren<MeshRenderer>().enabled = false;
         //   else GeneratorScript.AllPlanes[PlaneIndex-1].GetComponentInChildren<MeshRenderer>().enabled = false;
            GeneratorScript.SpawnSingle();
          
            PlaneIndex++;
        }
    }

    public void ResetSunInstantly()
    {
        Sun.transform.DOLocalMove(SunStartPosition, 1f);

        Gradient gradient;
        GradientColorKey[] colorKey;
        GradientAlphaKey[] alphaKey;

        gradient = new Gradient();

        // Populate the color keys at the relative time 0 and 1 (0 and 100%)
        colorKey = new GradientColorKey[2];
        colorKey[0].color = yellow;
        colorKey[0].time = 0.0f;
        colorKey[1].color = Color.black;
        colorKey[1].time = 1.0f;

        // Populate the alpha  keys at relative time 0 and 1  (0 and 100%)
        alphaKey = new GradientAlphaKey[2];
        alphaKey[0].alpha = 1.0f;
        alphaKey[0].time = 0.0f;
        alphaKey[1].alpha = 1.0f;
        alphaKey[1].time = 1.0f;

        gradient.SetKeys(colorKey, alphaKey);

        DOVirtual
            .Float(1,
            0,
            2,
            v =>
            {
                RenderSettings.fogColor = gradient.Evaluate(v);
            });
    }

}
