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

    [SerializeField,Range(0,100)] private float LRPlayerSpeed;
    [SerializeField,Range(0, 100)] public float ForwardPlayerSpeed;
    [SerializeField,Range(-50f, 10f)] private float FlightHeight;
    [SerializeField] private Animator Player_Animator;
    [SerializeField] private bool is_Gliding;
    [SerializeField] private LayerMask WhatIsGround;

    [SerializeField] private InputManager _InputManager;
    [SerializeField] private GameManager _GameManager;
    [HideInInspector]public GameObject previousPlane, CurrentPlane;

    [SerializeField, Range(0, 100)] private float SpeedIncreasePercentage;
    // MeshFilter m_Zero, m_First, m_Second;

    [SerializeField] private SkinnedMeshRenderer Renderer;

    Vector3 deltapos;

    Ray ray;
    RaycastHit RayCastHit;
    

    bool GiveUserControls = false;

   



    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        ScreenHalfWidth = Screen.width / 2f;
        Player_Animator.SetBool("Gliding", false);
        //WhatIsGround = ~WhatIsGround;
    }

    public void Start()
    {
        CurrentPlane = WorldGenerator.Singleton.AllTracks[0];
        previousPlane = WorldGenerator.Singleton.AllTracks[0];
    }


    public void Update()
    {
        if (_GameManager.isPlaying) { Move(); CheckForTrack(); }
        else Player_Animator.SetBool("Gliding", false);
    }

    #region Movement

    void Move()
    {
        
        if (GiveUserControls == true)
        {
            
            Player_Animator.SetBool("Gliding", true);
            transform.Translate(Vector3.forward * Time.deltaTime * ForwardPlayerSpeed);
            if (_InputManager.RecievingInput)
            {
                if (_InputManager.TouchInputX > ScreenHalfWidth)
                {
                    deltapos = transform.position;
                    deltapos.x += LRPlayerSpeed;
                    transform.Translate(Vector3.right * Time.deltaTime * LRPlayerSpeed);
                }

                else
                {
                    deltapos = transform.position;
                    deltapos.x -= LRPlayerSpeed;
                    //transform.position = Vector3.Lerp(transform.position, deltapos, Time.deltaTime);
                    transform.Translate(Vector3.left * Time.deltaTime * LRPlayerSpeed);
                    //  Debug.Log("Moving Left");
                }
            }
        }
    }

    public void AIMove()
    {
        Vector3 Zero,First, Second;

        Zero = WorldGenerator.Singleton.AllTracks[0].transform.TransformPoint((WorldGenerator.Singleton.AllTracks[0].GetComponent<MeshFilter>().sharedMesh.vertices[2] + WorldGenerator.Singleton.AllTracks[0].GetComponent<MeshFilter>().sharedMesh.vertices[3]) / 2);

       // m_First = (WorldGenerator.Singleton.AllTracks[1].GetComponent<MeshFilter>());
        First = WorldGenerator.Singleton.AllTracks[1].transform.TransformPoint(((WorldGenerator.Singleton.AllTracks[1].GetComponent<MeshFilter>()).sharedMesh.vertices[2]+ (WorldGenerator.Singleton.AllTracks[1].GetComponent<MeshFilter>()).sharedMesh.vertices[3])/2);

      //  m_Second = (WorldGenerator.Singleton.AllTracks[2].GetComponent<MeshFilter>());
        Second = WorldGenerator.Singleton.AllTracks[2].transform.TransformPoint(((WorldGenerator.Singleton.AllTracks[2].GetComponent<MeshFilter>()).sharedMesh.vertices[2] + (WorldGenerator.Singleton.AllTracks[2].GetComponent<MeshFilter>()).sharedMesh.vertices[3])/2);

        Zero.y = First.y = Second.y = transform.position.y;

        //Move to these Points
        transform.DOMove(Zero, 2).OnComplete(() => {
           
            transform.DOMove(First, 2).OnComplete(() =>
            {
                transform.DOMove(Second, 2).OnComplete(() => { GiveUserControls = true; });
            });
        });

        WorldGenerator.Singleton.Recalculate();




        //m_Zero = m_First = m_Second = null;
    }
    #endregion

    void CheckForTrack()
    {
       
        ray.origin = transform.position;
        ray.direction = transform.TransformDirection(Vector3.down);
        
        if (!Physics.Raycast(transform.position, transform.TransformDirection(Vector3.down), out RayCastHit, Mathf.Infinity))
        {
          GiveUserControls = false;
          GameManager.GameManagerInstance.GameOver();
         // Debug.Log("NoTilesOverMe");
               
        }
        else
        {
            CurrentPlane = RayCastHit.transform.gameObject;
            if (CurrentPlane != previousPlane) { PlanesHaveChanged.Invoke(); UpdateSpeed(); }
            previousPlane = RayCastHit.transform.gameObject;
           
        }
    }
    

    void UpdateSpeed()
    {
        ForwardPlayerSpeed += ForwardPlayerSpeed * (SpeedIncreasePercentage * 0.01f);
        LRPlayerSpeed += LRPlayerSpeed * (SpeedIncreasePercentage * 0.01f);
    }

    public void SetMeshVis(bool value)
    {
        Renderer.enabled = value;
    }
}
