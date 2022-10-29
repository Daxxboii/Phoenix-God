using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class WorldGenerator : MonoBehaviour
{
    void OnGUI()
    {
        if (GUI.Button(new Rect(10, 10, 150, 100), "I am a button"))
        {
            print("You clicked the button!");
        }
    }

    [Header("Procedural Generation")]
    //Number Of Turns
    [SerializeField, Range(2, 30)] private int MaxNumberOfTurns;

    public GameObject L, R;

    Vector3 Rotation,Scale;

   

    //List Of all turns
    public List<Vector3> TurnSegments;
    
    //List of All Planes
    [HideInInspector] public List<GameObject> AllTracks = new List<GameObject>();

    
    //List Of Directions
     public List<bool> AllDirections = new List<bool>();

    Vector3 NextDeviation;

    public static WorldGenerator Singleton;

    bool LeftOrRight;

    GameObject Parent;

    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        Player.PlanesHaveChanged += UpdatePlanes;
        GenerateStartingWorld();
    }

    #region World Generation Beginning
    void GenerateStartingWorld()
    {
        SpawnAllMeshes();
    }

    void SpawnAllMeshes()
    {
        Parent = new GameObject("Parent");

        for(int i = 0;i < MaxNumberOfTurns;i++)
        {

            LeftOrRight = LorR();
            AllDirections.Add(LeftOrRight);

            NextDeviation.z += 6;

            if (i != 0)
            {
                if (AllDirections[i - 1])
                {
                   
                    if (i%2!=0)
                    {
                        NextDeviation.x += 3.3f;
                    }
                    else
                    {
                        NextDeviation.x += 2.5f;
                    }
                }

                else
                {
                    if (i % 2 != 0)
                    {
                        NextDeviation.x -= 3.3f;
                    }
                    else
                    {
                        NextDeviation.x -= 2.5f;
                    }
                }
            }


            if (i % 2 == 0)
            {
                var Mesh = Instantiate(R, NextDeviation, Quaternion.identity);
                Mesh.name = "R";

                Rotation = Mesh.transform.eulerAngles;
                Rotation.y = 90;
                Rotation.x = 90;

                Mesh.transform.eulerAngles = Rotation;

                if (!LeftOrRight)
                {
                    Scale = Mesh.transform.localScale;
                    Scale.y *= -1;
                    Mesh.transform.localScale = Scale;
                }

                Mesh.transform.SetParent(Parent.transform);
            }
            else
            {
                var Mesh = Instantiate(L, NextDeviation, Quaternion.identity);
                Mesh.name = "L";

                Rotation = Mesh.transform.eulerAngles;
                Rotation.y = 90;
                Rotation.x = -90;

                Mesh.transform.eulerAngles = Rotation;

                if (LeftOrRight)
                {
                    Scale = Mesh.transform.localScale;
                    Scale.y *= -1;
                    Mesh.transform.localScale = Scale;
                }
                Mesh.transform.SetParent(Parent.transform);
            }

        }
    }
    #endregion


    public void UpdatePlanes()
    {
       StartCoroutine(UpdatePlanesOnRuntime());
    }

     IEnumerator UpdatePlanesOnRuntime()
    {
        yield return new WaitForSeconds(0f);
       
    }


    public void ResetWorld()
    {
       
    }

    bool LorR()
    {
        var randomNumber = Random.Range(0f, 2f); //Generates number between 1 & 2
        //Debug.Log(randomNumber);
        if (randomNumber > 1)
            return true;
        else
            return false;
    }
      
}




