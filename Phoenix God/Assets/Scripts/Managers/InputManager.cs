using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public Player playerScript;

    public float TouchInputX;
    public bool RecievingInput;
    Touch touch;

    void Update()
    {
        GetInputTouches();
    }

    //Inputs
    #region Events
    private void GetInputTouches()
    {

#if UNITY_EDITOR
     /*   if (Input.GetMouseButtonDown(0))
        {
            RecievingInput = true;
            TouchInputX = Input.mousePosition.x;
            OnRecieved.Invoke();
           
           // Debug.Log("Touch Started");
        }
        //Reset Input
        else
        {
            RecievingInput = false;
          //  Debug.Log("Touch Ended");

        }*/
#endif

#if UNITY_ANDROID || UNITY_IOS
        if (Input.touchCount > 0)
        {
            RecievingInput = true;
            touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                if (touch.position.y < (Screen.height / 0.5f)) TouchInputX = touch.position.x;

                playerScript.Move();
            }
          
           
        }
        else
        {
            RecievingInput = false;
        }
#endif
    }

    #endregion

}
