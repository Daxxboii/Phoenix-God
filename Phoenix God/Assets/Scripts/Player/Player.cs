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
    

    [SerializeField] private InputManager _InputManager;
    [SerializeField] private GameManager _GameManager;

    

    

    [SerializeField] private SkinnedMeshRenderer Renderer;

    public int LRIndex;

    bool AllowedToTap=true;

    public GameObject Sun;
    Tween SunShrink;
    public Color Black, yellow;

    public WorldGenerator GeneratorScript;

    public Vector3 SunUpPosition, SunDownPosition;
    [Range(0f,1f)]public float SunSpeed;

    void Awake()
    {
        if (Singleton == null) Singleton = this;
        
        Player_Animator.SetBool("Gliding", false);
      //  PlanesHaveChanged += ResetSun;
        
        AllowedToTap = true;
    }

    public void Start()
    {
        LRIndex = 0;
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

            if (Sun.transform.localPosition == SunDownPosition)
            {
                _GameManager.GameOver();
            }
            if (LRIndex != 0)
            {
                transform.position = Vector3.Lerp(transform.position, GeneratorScript.TurnPoints[LRIndex], Time.deltaTime * ForwardPlayerSpeed);
            }

        }
    }

    #region Movement

    public void Move()
    {
        if (_GameManager.isPlaying&&AllowedToTap)
        {
            Player_Animator.SetBool("Gliding", true);
            

            
           
            LRIndex++;

          //  GeneratorScript.UpdatePlanes();
            PlanesHaveChanged.Invoke();
            ResetSun();


        }
    }
    #endregion

    public void SetMeshVis(bool value)
    {
        Renderer.enabled = value;
    }
}
