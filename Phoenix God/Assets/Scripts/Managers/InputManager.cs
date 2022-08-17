using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public static float TouchInputX;
    public static bool RecievingInput;

    private void Update()
    {
        GetInputTouches();
    }

    //Inputs
    #region Events
    private void GetInputTouches()
    {

#if UNITY_EDITOR
        if (Input.GetMouseButton(0))
        {
            RecievingInput = true;
            TouchInputX = Input.mousePosition.x;
        }
        //Reset Input
        else if (Input.GetMouseButtonUp(0))
        {
            RecievingInput = false;
        }
#endif

#if UNITY_ANDROID || UNITY_IOS
        if (Input.touchCount > 0)
        {
            RecievingInput = true;
            Touch touch = Input.GetTouch(0);
            if(touch.position.y<(Screen.height/0.5f))TouchInputX = touch.position.x;
        }
        else
        {
            RecievingInput = false;
        }
#endif
    }

    #endregion

}
