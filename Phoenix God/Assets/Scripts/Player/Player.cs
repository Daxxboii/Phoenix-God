using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class Player : MonoBehaviour
{
    public delegate void ChangedPlanes();
    public static ChangedPlanes PlanesHaveChanged;


    public static Player Singleton;

    private float ScreenHalfWidth;

    [SerializeField,Range(0, 100)] public float ForwardPlayerSpeed;
    [SerializeField,Range(-50f, 10f)] private float FlightHeight;
    [SerializeField] private Animator Player_Animator;
    [SerializeField] private bool is_Gliding;
    [SerializeField] private LayerMask WhatIsGround;

    [SerializeField] private InputManager _InputManager;
    [SerializeField] private GameManager _GameManager;

    [SerializeField, Range(0, 100)] private float SpeedIncreasePercentage;

    [SerializeField] private SkinnedMeshRenderer Renderer;

    public int LRIndex;
    

   // bool GiveUserControls = false;

    bool AllowedToTap=true;

    public GameObject Sun;

    float Sun_multiplier;

    Tween SunShrink;

  

   



    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        ScreenHalfWidth = Screen.width / 2f;
        Player_Animator.SetBool("Gliding", false);
        PlanesHaveChanged += ResetSun;
        InputManager.OnRecieved += Move;
        AllowedToTap = true;
    }

    public void Start()
    {
        LRIndex = 0;
        Sun_multiplier = 1;
        Sun.transform.DOScale(184f, 0.1f);


    }

    void ResetSun()
    {
        SunShrink.Kill();
        Sun.transform.DOScale(184f, 0.1f).OnComplete(() => {
            SunShrink = Sun.transform.DOScale(0f, 5f).OnComplete(() => { GameManager.GameManagerInstance.GameOver();  });
        });
    }

    #region Movement

    void Move()
    {
        // if (GiveUserControls == true&&_GameManager.isPlaying)
        if (_GameManager.isPlaying&&AllowedToTap)
        {
            
            Player_Animator.SetBool("Gliding", true);
            AllowedToTap = false;
            transform.DOMove(WorldGenerator.Singleton.AllTrackers[1].transform.position,0.05f).OnComplete(()=> { PlanesHaveChanged.Invoke();AllowedToTap = true;});

           

            if ( WorldGenerator.Singleton.AllDirections[LRIndex]==true) 
            {
                if (_InputManager.TouchInputX < Screen.width/2)
                {
                    Handheld.Vibrate();
                    GameManager.GameManagerInstance.GameOver();
                }
            }

            else
            {
                if (_InputManager.TouchInputX > Screen.width/2)
                {
                    Handheld.Vibrate();
                    GameManager.GameManagerInstance.GameOver();
                }
            }
            LRIndex++;


        }
    }
    #endregion

    public void SetMeshVis(bool value)
    {
        Renderer.enabled = value;
    }
}
