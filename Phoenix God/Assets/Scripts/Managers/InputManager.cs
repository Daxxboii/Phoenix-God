using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public Player playerScript;

    public float TouchInputX;

    public bool RecievingInput;

    public static bool CanReceiveInput;

    Touch touch;

    void Update()
    {
        GetInputTouches();
    }

    //Inputs
#region Events
    private void GetInputTouches()
    {
        if (CanReceiveInput)
        {
            if (Input.touchCount > 0)
            {
                RecievingInput = true;
                
                touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Began)
                {
                    if (touch.position.y < (Screen.height / 1.2f))
                    {
                        TouchInputX = touch.position.x;

                        if (TouchInputX > Screen.width / 2f)
                            playerScript.PerformedStep = true;
                        else
                            playerScript.PerformedStep = false;

                        playerScript.Move();
                    }
                }
            }

            if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D))
            {
                RecievingInput = true;
                if (Input.GetKeyDown(KeyCode.A))
                {
                    playerScript.PerformedStep = false;
                }
                else
                {
                    playerScript.PerformedStep = true;
                 }
                 playerScript.Move();
                //Debug.Log("Touch");
            }
            else
            {
                RecievingInput = false;
            }
        }
    }


#endregion

}
