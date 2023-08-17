using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Newtonsoft.Json.Linq;
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

    [SerializeField, Range(0, 500), Header("Sun Movement")]
    private float SunUpForceMax,SunUpForceInitial,SunDownSpeedMax,SunDownSpeedInitial;



    [Range(0f, 100f)]
    private float SunUpForce;

    [Range(0f, 5f)]
    private float SunDownSpeed;


    //[HideInInspector]
    public int LRIndex;

    private int PlaneIndex;

    [Header("Colors")]
    public Color Black;

    public Color yellow;

    private Color stripcolor;



    [Header("Vectors")]
    public Vector3

            SunUpPosition,
            SunDownPosition,
            SunStartPosition;

    private Vector3 ClampedSunPos;

    private Vector3 UpdatedPlayerPos;

    Collider[] hitColliders;

    [Header("Booleans")]
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

    [SerializeField]
    public Animator Player_Animator;

    [SerializeField]
    private GameManager _GameManager;

    [SerializeField]
    private SkinnedMeshRenderer Renderer;
    [SerializeField] private MeshRenderer TailRenderer;

    public GameObject Sun;

    public AlternateWorldGenerator GeneratorScript;

    public Material

            FadePath, Sky;


    private GameObject PreviousPlane;

    private float SkyExposure;

    private RaycastHit hit;

    private Vector3 Sunpos;
    public Material Plane;

    Vector2 Offset;

    public EmissionTester strip;

    void Awake()
    {
        if (Singleton == null) Singleton = this;
    }

    public void Start()
    {
        ResetEverything();
    }

    public void ResetEverything()
    {
        Debug.Log("Player Reset Called");
        resetDifficulty();
        ResetSunInstantly();
        LRIndex = 0;
        PlaneIndex = 0;
        RenderSettings.fogColor = yellow;
        Player_Animator.SetBool("Gliding", false);
        Phoenix.transform.rotation = Quaternion.identity;
        ResetIndex = 1;
        IsSunPoweredUp = false;
        ResettingSun = false;
        PreviousPlane = null;
        InputManager.CanReceiveInput = false;
        UpdatedPlayerPos.y += FlyHeight;
        SetMeshVis(true);
        TurnPlayer(false);
        NextMove = false;
    }

    public void resetDifficulty()
    {
        SunDownSpeed = SunDownSpeedInitial;
        SunUpForce = SunUpForceInitial;
    }

    void ResetSun()
    {
        Sunpos = Sun.transform.localPosition;
        Sunpos.y += 100;
        Sun.transform.localPosition =
            Vector3
                .Lerp(Sun.transform.localPosition,
                Sunpos,
                Time.deltaTime * SunUpForce);

        ClampedSunPos = Sun.transform.localPosition;
        ClampedSunPos.y =
            Mathf.Clamp(ClampedSunPos.y, SunDownPosition.y, SunUpPosition.y);
        Sun.transform.localPosition = ClampedSunPos;
    }

    void FixedUpdate()
    {
        if (_GameManager.isPlaying)
        {
            strip.emission = Remap(Sun.transform.localPosition.y, SunDownPosition.y, SunUpPosition.y, 0, 1);
            if (!ResettingSun && !IsSunPoweredUp)
            {
                Sun.transform.localPosition =
                    Vector3
                        .Lerp(Sun.transform.localPosition,
                        SunDownPosition,
                        Time.deltaTime * SunDownSpeed);
            }
            else
            {
                ResetSun();
            }
            if (Sun.transform.localPosition.y <= SunDownPosition.y + 200)
            {
                Debug.Log("Sun Down");
                _GameManager.GameOver();
                MenuManager.Instance.GameOver();
            }


        }
        //Debug.Log("LRIndex is" + LRIndex);
        UpdatedPlayerPos = GetQuarterPoint(GeneratorScript.TurnPositions[LRIndex], GeneratorScript.TurnPositions[LRIndex + 1]);
        UpdatedPlayerPos.y += FlyHeight;
        Phoenix.transform.position =
            Vector3
                .Lerp(Phoenix.transform.position,
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
                if (SunDownSpeed < SunDownSpeedMax) SunDownSpeed += 0.5f;
                if (SunUpForce > SunUpForceMax) SunUpForce -= 10f;

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
                Debug.Log("wrong Input");
                _GameManager.GameOver();
                MenuManager.Instance.GameOver();
            }
        }
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
        GeneratorScript.SpawnSingle();
        PlaneIndex++;

    }

    public void ResetSunInstantly()
    {
        Sun.transform.DOLocalMove(SunStartPosition, 1f);
        strip.emission = 1;

    }
    public float Remap(float value, float from1, float to1, float from2, float to2)
    {
        return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
    }

    public Vector3 GetQuarterPoint(Vector3 point1, Vector3 point2)
    {
        Vector3 difference = point2 - point1;
        Vector3 quarterPoint = point1 + difference * 0.25f;
        return quarterPoint;
    }

}
