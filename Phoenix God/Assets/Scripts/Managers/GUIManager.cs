using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GUIManager : MonoBehaviour
{
    bool DevSettings;

    float

            hSbarValue,
            vSbarValue;

    float

            Horizontal,
            Vertical;

    public AlternateWorldGenerator generator;

    float

            DefaultX,
            DefaultY;

    void Start()
    {
       /* if (!PlayerPrefs.HasKey("Horizontal"))
        {
            DefaultX = generator.PlaneScaleX;
            DefaultY = generator.PlaneScaleZ;

            PlayerPrefs.SetFloat("DefaultX", DefaultX);
            PlayerPrefs.SetFloat("DefaultY", DefaultY);
        }

        Horizontal = PlayerPrefs.GetFloat("Horizontal", generator.PlaneScaleX);
        Vertical = PlayerPrefs.GetFloat("Vertical", generator.PlaneScaleZ);

        generator.PlaneScaleX = Horizontal;
        generator.PlaneScaleZ = Vertical;

        PlayerPrefs.SetFloat("Horizontal", Horizontal);
        PlayerPrefs.SetFloat("Vertical", Vertical);

        PlayerPrefs.Save();

        hSbarValue = Horizontal;
        vSbarValue = Vertical;*/
    }

    void OnGUI()
    {
      /*  GUILayout.BeginArea(new Rect(10, 150, 300, 700));

        if (DevSettings)
        {
            GUILayout.Label("Horizontal Width");

            hSbarValue =
                GUILayout.HorizontalScrollbar(hSbarValue, 1.0f, 0.0f, 50.0f);

            GUILayout.Label(hSbarValue.ToString());

            GUILayout.Label("Vertical Width");

            vSbarValue =
                GUILayout.HorizontalScrollbar(vSbarValue, 1.0f, 0.0f, 50.0f);

            GUILayout.Label(vSbarValue.ToString());

            if (GUILayout.Button("Reset Changes", GUILayout.Height(40f)))
            {
                PlayerPrefs
                    .SetFloat("Horizontal", PlayerPrefs.GetFloat("DefaultX"));
                PlayerPrefs
                    .SetFloat("Vertical", PlayerPrefs.GetFloat("DefaultY"));

                PlayerPrefs.Save();

                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }

            if (GUILayout.Button("Apply Changes", GUILayout.Height(40f)))
            {
                PlayerPrefs.SetFloat("Horizontal", hSbarValue);
                PlayerPrefs.SetFloat("Vertical", vSbarValue);

                PlayerPrefs.Save();

                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }

            if (GUILayout.Button("Close", GUILayout.Height(40f)))
            {
                DevSettings = false;
            }
        }
        else
        {
            if (GUILayout.Button("Developer Settings",GUILayout.Height(40f)))
            {
                DevSettings = true;
            }
        }

        GUILayout.EndArea();*/
    }
}
