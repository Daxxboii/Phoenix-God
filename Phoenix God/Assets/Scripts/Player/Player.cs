using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class Player : MonoBehaviour
{
    public static Player Singleton;

    private Vector3 NextExpectedMove, NextMove;
    private float Z_Offset;
    private float ScreenHalfWidth;
    [SerializeField,Range(0f,1.5f)] private float TimeTakenToMove;
    [SerializeField, Range(-50f, 10f)] private float FlightHeight;
    [SerializeField] private Animator Player_Animator;
    [SerializeField] private bool is_Gliding;


    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        ScreenHalfWidth = Screen.width / 2f;
        Z_Offset = GameManager.GameManagerInstance.Length;
        NextExpectedMove = new Vector3(0, FlightHeight,Z_Offset );
        NextMove.y = FlightHeight;
        Player_Animator.SetBool("Gliding", false);
    }

    
    
    public void Update()
    {
        Move();
    }
   

    #region Movement

    void Move()
    {
        if (InputManager.TouchInputX > ScreenHalfWidth)
        {
            Debug.Log("Moving Right");
        }
        else
        {
            Debug.Log("Moving Left");
        }
    }
    #endregion
}
