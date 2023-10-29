using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using MyBox;
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
    [SerializeField, Range(0, 10000)]
    private float SunUpForceMax,SunUpForceInitial,SunDownSpeedMax,SunDownSpeedInitial;
    [Separator]
    [SerializeField,Range(0f,5000f)]
    private float SunDownFactor, SunUpFactor;

    [Range(0f, 100f),SerializeField,ReadOnly]
    private float SunUpForce,SunDownSpeed;
    public int LRIndex;
    [Header("Vectors")]
    public Vector3 SunUpPosition, SunDownPosition, SunStartPosition;
    private Vector3 ClampedSunPos;
    private Vector3 UpdatedPlayerPos;
    Collider[] hitColliders;

    [Header("Booleans")]
    [HideInInspector]
    public bool PerformedStep;
    [SerializeField]
    public static int ResetIndex;
    bool ResettingSun,NextMove;

    [Header("References")]
    public GameObject Phoenix;

    [SerializeField]
    public Animator Player_Animator;

    [SerializeField]
    private GameManager _GameManager;

    [SerializeField]
    private SkinnedMeshRenderer Renderer;

    public GameObject Sun;

    public AlternateWorldGenerator GeneratorScript;
    private Vector3 Sunpos;
    

    Vector2 Offset;
    public GameObject[] StartupItems;

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
        resetDifficulty();
        ResetSunInstantly();
        LRIndex = 0;
        Player_Animator.SetBool("Gliding", false);
        Phoenix.transform.rotation = Quaternion.identity;
        ResetIndex = 1;
        ResettingSun = false;
        InputManager.CanReceiveInput = false;
        UpdatedPlayerPos.y += FlyHeight;
        SetMeshVis(true);
        TurnPlayer(false);
        NextMove = false;
        foreach(var item in StartupItems) item.SetActive(true);
        Debug.Log("Player Reset Called");
    }

    public void resetDifficulty()
    {
        SunDownSpeed = SunDownSpeedInitial;
        SunUpForce = SunUpForceMax;
    }

    void ResetSun()
    {
        Sunpos = Sun.transform.localPosition;
        Sunpos.y += SunUpForce;
        Sun.transform.localPosition = Vector3.Slerp(Sun.transform.localPosition,Sunpos,Time.deltaTime * 500);
        ClampedSunPos = Sun.transform.localPosition;
        ClampedSunPos.y = Mathf.Clamp(ClampedSunPos.y, SunDownPosition.y, SunUpPosition.y);
        Sun.transform.localPosition = ClampedSunPos;
    }

    void FixedUpdate()
    {
        if (_GameManager.isPlaying)
        {
            if (Sun.transform.localPosition.y <= SunDownPosition.y + 200)
            {
                Debug.Log("Sun Down");
                _GameManager.GameOver();
                MenuManager.Instance.GameOver();
            }
            if (!ResettingSun)
            {
                Sun.transform.localPosition = Vector3.Lerp(Sun.transform.localPosition,SunDownPosition,Time.deltaTime * SunDownSpeed);
            }
            else
            {
                ResetSun();
            }
        }
        UpdatedPlayerPos = GeneratorScript.TurnPositions[LRIndex];
        UpdatedPlayerPos.y += FlyHeight;
        Phoenix.transform.position = Vector3.Lerp(Phoenix.transform.position, UpdatedPlayerPos,Time.deltaTime * ForwardPlayerSpeed);
    }


    #region Movement

    public void Move()
    {
        if (_GameManager.isPlaying)
        {
            foreach (var item in StartupItems)
            {
                item.SetActive(false);
            }
            if (PerformedStep == NextMove)
            {
                if (SunDownSpeed < SunDownSpeedMax) SunDownSpeed += SunDownFactor;
                if (SunUpForce > SunUpForceInitial) SunUpForce -= SunUpFactor;

                StartCoroutine(Fading());

                TurnPlayer(PerformedStep);

                PlanesHaveChanged.Invoke();
                Player_Animator.SetBool("Gliding", true);

                // GeneratorScript.AllPlanes[0].SetActive(false);
                LRIndex++;
                NextMove = GeneratorScript.AllDirections[LRIndex+1];
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
       Phoenix.transform.rotation = value? transform.rotation * Quaternion.Euler(0, 30, 0) : transform.rotation * Quaternion.Euler(0, -30, 0);
    }
    #endregion


    public void SetMeshVis(bool value)
    {
        Renderer.enabled = value;
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
    }

    public void ResetSunInstantly()
    {
        Sun.transform.DOLocalMove(SunStartPosition, 1f);

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
