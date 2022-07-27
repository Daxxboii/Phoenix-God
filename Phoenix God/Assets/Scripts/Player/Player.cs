using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class Player : MonoBehaviour
{
    private Vector3 NextExpectedMove, NextMove;
    private float Z_Offset;
    [SerializeField,Range(0f,1.5f)] private float TimeTakenToMove;
    [SerializeField, Range(-50f, 10f)] private float FlightHeight;
    [SerializeField] private Animator Player_Animator;
    [SerializeField] private bool is_Gliding;
    private void Awake()
    {
        Z_Offset = GameManager.GameManagerInstance.Length;
        GameManager.ReceivedTouched += TouchInputRecieved;//Calling this Function when touch is recieved
        NextExpectedMove = new Vector3(0, FlightHeight,Z_Offset );
        NextMove.y = FlightHeight;
        Player_Animator.SetBool("Gliding", false);
    }

    #region Input
    //Call this Function Whenever a touch is recieved
    private void TouchInputRecieved()
    {

        //Get Mouse input in editor
#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            if (Input.mousePosition.x > Screen.width / 2)
            {
                Debug.Log("Right");
                Move(1);
            }
            else
            {
                Debug.Log("Left");
                Move(-1);
            }
        }
#endif

#if UNITY_ANDROID
        if (Input.touchCount > 0)
        {
            //Get Touch Input
            var touch = Input.GetTouch(0);
            if (touch.position.x < Screen.width / 2)
            {
                Debug.Log("Left click");
                Move(-1);
            }
            else if (touch.position.x > Screen.width / 2)
            {
                Debug.Log("Right click");
                Move(1);
            }
        }
#endif
    }
    #endregion

    #region Movement

    void Move(int LR)//+1 is right -1 is left
    {
        Player_Animator.SetBool("Gliding", true);
        if (LR == 1)
        {
            NextMove.x += GameManager.GameManagerInstance.X_Offset;
            transform.DOMove(NextMove, TimeTakenToMove).OnComplete(() => Player_Animator.SetBool("Gliding", false));
        }
        else
        {
            NextMove.x -= GameManager.GameManagerInstance.X_Offset;
            transform.DOMove(NextMove, TimeTakenToMove).OnComplete(() => Player_Animator.SetBool("Gliding", false));
        }
        NextExpectedMove.z += Z_Offset;
        NextMove.z += Z_Offset;
    }
    #endregion
}
