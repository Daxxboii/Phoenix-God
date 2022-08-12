using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
[CustomEditor(typeof(GameManager))]
public class GameManagerEditor : Editor
{
    GameManager Target;

    void OnSceneGUI()
    {
        Target = (GameManager)target;

        Handles.BeginGUI();
        {
            GUIStyle boxStyle = new GUIStyle("box");
            GUIStyle fontStyle = new GUIStyle();
            fontStyle.fontSize = 8;
            fontStyle.normal.textColor = Color.black;
            fontStyle.alignment = TextAnchor.MiddleCenter;
            GUILayout.BeginArea(new Rect(10, 10, 200, 50), boxStyle);
            {
                GUILayout.Label("World Generation");

                if (GUILayout.Button("Bake Scene Paths"))
                {
                    Target.SetUpWorldInEditor();
                    Debug.Log("Set Up");
                }
            }
            GUILayout.EndArea();
        }
        Handles.EndGUI();
       
       

        
    }
}
