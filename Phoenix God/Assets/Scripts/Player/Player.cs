using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    private void Awake()
    {
        GameManager.ReceivedTouched += TouchInputRecieved;//Calling this Function when touch is recieved    
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
            }
            else
            {
                Debug.Log("Left");
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
            }
            else if (touch.position.x > Screen.width / 2)
            {
                Debug.Log("Right click");
            }
        }
#endif
    }
    #endregion

    #region Movement

    #endregion
}
