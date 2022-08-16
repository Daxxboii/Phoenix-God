using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class Player : MonoBehaviour
{
    public static Player Singleton;

    private float ScreenHalfWidth;

    [SerializeField,Range(0,100)] private float LRPlayerSpeed;
    [SerializeField,Range(0, 100)] public float ForwardPlayerSpeed;
    [SerializeField,Range(-50f, 10f)] private float FlightHeight;
    [SerializeField] private Animator Player_Animator;
    [SerializeField] private bool is_Gliding;
    [SerializeField] private LayerMask WhatIsGround;

    Ray ray;
    RaycastHit RayCastHit;



    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        ScreenHalfWidth = Screen.width / 2f;
        Player_Animator.SetBool("Gliding", false);

        
        //WhatIsGround = ~WhatIsGround;
    }

    
    
    public void Update()
    {
        if (GameManager.GameManagerInstance.isPlaying) { Move(); CheckForTrack(); }
    }

    #region Movement

    void Move()
    {
        transform.Translate(Vector3.forward * Time.deltaTime * ForwardPlayerSpeed);
        if (InputManager.RecievingInput)
        {
            if (InputManager.TouchInputX > ScreenHalfWidth)
            {
               // Debug.Log("Moving Right");
                transform.Translate(Vector3.right * Time.deltaTime * LRPlayerSpeed);
            }

            else
            {
                transform.Translate(Vector3.left * Time.deltaTime * LRPlayerSpeed);
              //  Debug.Log("Moving Left");
            }
        }
    }
    #endregion

    void CheckForTrack()
    {
        ray.origin = transform.position;
        ray.direction = transform.TransformDirection(Vector3.down);


        if (!Physics.Raycast(transform.position, transform.TransformDirection(Vector3.down), out RayCastHit, Mathf.Infinity))
        {
            GameManager.GameManagerInstance.GameOver();
        }
    }
}
