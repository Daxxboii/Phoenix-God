using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    public delegate void ChangedPlanes();

    public static ChangedPlanes PlanesHaveChanged;

    public static ChangedPlanes ResetWorld;

    public static Player Singleton;

    [SerializeField, Range(0, 100)]
    public float ForwardPlayerSpeed;

    [SerializeField]
    public Animator Player_Animator;

    [SerializeField]
    private bool is_Gliding;

    [SerializeField]
    private GameManager _GameManager;

    [Range(0f, 100f)]
    public float SunUpFactor;

    [SerializeField]
    private SkinnedMeshRenderer Renderer;

    public int LRIndex;

    bool

            ResettingSun,
            IsSunPoweredUp;

    public GameObject Sun;

    public Color

            Black,
            yellow;

    public AlternateWorldGenerator GeneratorScript;

    public Vector3

            SunUpPosition,
            SunDownPosition;

    [Range(0f, 1f)]
    public float SunSpeed;

    bool NextMove;

    public bool PerformedStep;

    public GameObject Phoenix;

    public static bool

            ResetEnabled,
            IsSunButtonEnabled;

    float HourglassProgress;

    public Image

            HourGlassOuter,
            HourGlassInner;

    float timer;

    public bool UsedUpSunPower;

    private Vector3 ClampedSunPos;

    public bool KillTween = false;

    void Awake()
    {
        if (Singleton == null) Singleton = this;
    }

    public void Start()
    {
        ResetSun();
        LRIndex = 0;
        Sun.transform.localPosition = new Vector3(0, -45, 745.8f);
        RenderSettings.fogColor = yellow;
        NextMove = GeneratorScript.AllDirections[0];
        Player_Animator.SetBool("Gliding", false);
        Phoenix.transform.rotation = Quaternion.identity;
        ResetEnabled = true;
        IsSunButtonEnabled = false;
        UsedUpSunPower = false;
        IsSunPoweredUp = false;
        ResettingSun = false;
        timer = 0;
        InputManager.CanReceiveInput = false;
        KillTween = false;

        HourGlassInner.fillAmount = 1;
        HourGlassInner.color = Color.white;
    }

    void ResetSun()
    {
        Sun.transform.localPosition =
            Vector3
                .Lerp(Sun.transform.localPosition,
                new Vector3(Sun.transform.localPosition.x,
                    Sun.transform.localPosition.y + SunUpFactor,
                    Sun.transform.localPosition.z),
                Time.deltaTime * SunSpeed * 5);
        ClampedSunPos = Sun.transform.localPosition;
        ClampedSunPos.y =
            Mathf.Clamp(ClampedSunPos.y, SunDownPosition.y, SunUpPosition.y);
        Sun.transform.localPosition = ClampedSunPos;
        RenderSettings.fogColor =
            Color
                .Lerp(RenderSettings.fogColor,
                yellow,
                Time.deltaTime * SunSpeed * 50);
    }

    void Update()
    {
        if (_GameManager.isPlaying)
        {
            if (!UsedUpSunPower)
            {
                timer += Time.deltaTime;

                // HourglassProgress = SunUpPosition.y / Sun.transform.localPosition.y;
                HourglassProgress =
                    mapOneRangeToAnother(Sun.transform.localPosition.y,
                    SunUpPosition.y,
                    SunDownPosition.y,
                    1,
                    0,
                    2);
                Debug.Log (HourglassProgress);

                if (!IsSunButtonEnabled)
                    HourGlassOuter.fillAmount = HourglassProgress;

                if (HourglassProgress > 0.93f && timer > 2f)
                {
                    MenuManager.Instance.ActivateSunButton();
                    HourGlassOuter.fillAmount = 1;
                    IsSunButtonEnabled = true;
                }
            }
            if (Tutorial.TutorialOver)
            {
                if (!ResettingSun && !IsSunPoweredUp)
                {
                    Sun.transform.localPosition =
                        Vector3
                            .Lerp(Sun.transform.localPosition,
                            SunDownPosition,
                            Time.deltaTime * SunSpeed);
                    RenderSettings.fogColor =
                        Color
                            .Lerp(RenderSettings.fogColor,
                            Black,
                            Time.deltaTime * SunSpeed);
                }
                else
                {
                    ResetSun();
                }
                if (Sun.transform.localPosition.y <= SunDownPosition.y + 10)
                {
                    if (ResetEnabled)
                    {
                        ResetWorld.Invoke();
                    }
                    else
                    {
                        _GameManager.GameOver();
                    }
                }
            }
            transform.position =
                Vector3
                    .Lerp(transform.position,
                    GeneratorScript.TurnPositions[LRIndex],
                    Time.deltaTime * ForwardPlayerSpeed);
        }
    }


#region Movement

    public void Move()
    {
        if (_GameManager.isPlaying)
        {
            if (PerformedStep == NextMove)
            {
                TurnPlayer (PerformedStep);
                Player_Animator.SetBool("Gliding", true);
                GeneratorScript.SpawnMorePlanes();
                PlanesHaveChanged.Invoke();
                LRIndex++;
                NextMove = GeneratorScript.AllDirections[LRIndex];
                if (Tutorial.TutorialOver) StartCoroutine(SunDown());
            }
            else
            {
                if (ResetEnabled)
                {
                    ResetWorld.Invoke();
                    timer = 0;
                }
                else
                {
                    _GameManager.GameOver();
                }
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
    }

    IEnumerator SunDown()
    {
        ResettingSun = true;
        yield return new WaitForSeconds(0.2f);
        ResettingSun = false;
    }

    public void ResetSunInstantly()
    {
        var UpPos = SunUpPosition;
        UpPos.y -= 10f;
        Sun.transform.DOLocalMove(UpPos, 1f);

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

        gradient.SetKeys (colorKey, alphaKey);

        DOVirtual
            .Float(1,
            0,
            2,
            v =>
            {
                RenderSettings.fogColor = gradient.Evaluate(v);
            });
    }

    public void _SunPowerUp()
    {
        IsSunPoweredUp = true;
        UsedUpSunPower = true;
        KillTween = true;

        DOVirtual
            .Float(1,
            0.2f,
            30,
            x =>
            {
                if (KillTween) HourGlassInner.fillAmount = x;
            })
            .OnComplete(() =>
            {
                if (KillTween)
                {
                    IsSunPoweredUp = false;
                    MenuManager.Instance.DisableSunButton();
                    HourGlassInner.fillAmount = 1;
                    HourGlassInner.color = new Color(0.7f, 0.7f, 0.7f);
                }
            });
    }

    public float
    mapOneRangeToAnother(
        float sourceNumber,
        float fromA,
        float fromB,
        float toA,
        float toB,
        int decimalPrecision
    )
    {
        float deltaA = fromB - fromA;
        float deltaB = toB - toA;
        float scale = deltaB / deltaA;
        float negA = -1 * fromA;
        float offset = (negA * scale) + toA;
        float finalNumber = (sourceNumber * scale) + offset;
        int calcScale = (int) Mathf.Pow(10, decimalPrecision);
        return (float) Mathf.Round(finalNumber * calcScale) / calcScale;
    }
}
