using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class Player : MonoBehaviour
{
    public delegate void ChangedPlanes();
    public static ChangedPlanes PlanesHaveChanged;


    public static Player Singleton;

    [SerializeField,Range(0, 100)] public float ForwardPlayerSpeed;
    
    [SerializeField] private Animator Player_Animator;
    [SerializeField] private bool is_Gliding;
    [SerializeField] private GameManager _GameManager;

    [SerializeField] private SkinnedMeshRenderer Renderer;

    public int LRIndex;

   

    public GameObject Sun;
    public Color Black, yellow;

    public WorldGenerator GeneratorScript;

    public Vector3 SunUpPosition, SunDownPosition;
    [Range(0f,1f)]public float SunSpeed;

    bool NextMove;
     public bool PerformedStep;

    public GameObject Phoenix;

    void Awake()
    {
        if (Singleton == null) Singleton = this;
    }

    public void Start()
    {
        LRIndex = 0;
        Sun.transform.localPosition = SunUpPosition;
        RenderSettings.fogColor = yellow;
        NextMove = GeneratorScript.AllDirections[2];
        Player_Animator.SetBool("Gliding", false);
        Phoenix.transform.rotation = Quaternion.identity;
    }

    void ResetSun()
    {
        Sun.transform.localPosition = Vector3.Slerp(Sun.transform.localPosition, SunUpPosition, Time.deltaTime * SunSpeed*50);
        RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor, yellow, Time.deltaTime * SunSpeed*50);
    }

    void Update()
    {
        if (_GameManager.isPlaying) 
        {
            Sun.transform.localPosition = Vector3.Slerp(Sun.transform.localPosition, SunDownPosition, Time.deltaTime * SunSpeed);
            RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor, Black, Time.deltaTime * SunSpeed);

            if (Sun.transform.localPosition.y <= SunDownPosition.y+10)
            {
               
                _GameManager.GameOver();
            }
            
                transform.position = Vector3.Lerp(transform.position, GeneratorScript.AllTrackers[1].transform.position, Time.deltaTime * ForwardPlayerSpeed);
            
        }
    }

    #region Movement

    public void Move()
    {
        if (_GameManager.isPlaying)
        {
            if (PerformedStep == NextMove)
            {
                TurnPlayer(PerformedStep);
                Player_Animator.SetBool("Gliding", true);

                GeneratorScript.UpdatePlanes();


                PlanesHaveChanged.Invoke();
                ResetSun();
                LRIndex++;
                NextMove = GeneratorScript.AllDirections[LRIndex + 2];
            }
            else
            {
                  _GameManager.GameOver();
            }
            
           


        }
    }

    public void TurnPlayer(bool value)
    {
        if (value)
        {
            Phoenix.transform.rotation = transform.rotation * Quaternion.Euler(0, 30, 0);
        }
        else
        {
            Phoenix.transform.rotation = transform.rotation * Quaternion.Euler(0, -30, 0);
        }

        
    }
    #endregion

    public void SetMeshVis(bool value)
    {
        Renderer.enabled = value;
    }
}
