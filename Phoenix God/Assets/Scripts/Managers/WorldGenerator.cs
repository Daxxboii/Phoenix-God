using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class WorldGenerator : MonoBehaviour
{

    [Header("Procedural Generation")]
    //Number Of Turns
    [SerializeField, Range(2, 150)] private int MaxNumberOfTurns;

    public GameObject L, R;

    Vector3 Rotation,Scale;

    public Transform StartPos;

    public float SizeModifier;


    //List of All Planes
    [HideInInspector] public List<Vector3> TurnPoints = new List<Vector3>();
    [HideInInspector] public List<GameObject> Tracks = new List<GameObject>();


    //List Of Directions
    public List<bool> AllDirections = new List<bool>();

    Vector3 NextDeviation;

    public static WorldGenerator Singleton;

    bool LeftOrRight;
    int LRindex;

    GameObject Parent;

    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        Parent = new GameObject("Parent");
        NextDeviation = StartPos.position;
        GenerateStartingWorld();
    }

    #region World Generation Beginning
    void GenerateStartingWorld()
    {
        SpawnAllMeshes(0);
    }

    void SpawnAllMeshes(int index)
    {

        for(int i = 0;i < MaxNumberOfTurns;i++)
        {
            LRindex = i;
            LeftOrRight = LorR();
            AllDirections.Add(LeftOrRight);

            if (i != 0 ||index==1)
            {
                if (AllDirections[i-1])
                {
                   
                    if (i%2!=0)
                    {
                        NextDeviation.x += 3.3f*SizeModifier;
                    }
                    else
                    {
                        NextDeviation.x += 2.5f * SizeModifier;
                    }
                }

                else
                {
                    if (i % 2 != 0)
                    {
                        NextDeviation.x -= 3.3f * SizeModifier;
                    }
                    else
                    {
                        NextDeviation.x -= 2.5f * SizeModifier;
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

                Mesh.transform.localScale *= SizeModifier;

                if (!LeftOrRight)
                {
                    Scale = Mesh.transform.localScale;
                    Scale.y *= -1;
                    Mesh.transform.localScale = Scale;
                }
                TurnPoints.Add(Mesh.transform.position);
                Tracks.Add(Mesh);

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
                Mesh.transform.localScale *= SizeModifier;

                if (LeftOrRight)
                {
                    Scale = Mesh.transform.localScale;
                    Scale.y *= -1;
                    Mesh.transform.localScale = Scale;
                }
                TurnPoints.Add(Mesh.transform.position);
                Tracks.Add(Mesh);

                Mesh.transform.SetParent(Parent.transform);
            }
            NextDeviation.z += 6 * SizeModifier;
        }

        Player.Singleton.Move();
    }
    #endregion


    public void UpdatePlanes()
    {
       StartCoroutine(UpdatePlanesOnRuntime());
    }

     IEnumerator UpdatePlanesOnRuntime()
    {
        yield return new WaitForSeconds(0f);
       /* LeftOrRight = LorR();
        AllDirections.Add(LeftOrRight);

        if (LeftOrRight)
        {
            if (AllDirections[AllDirections.Count-2])
            {
                NextDeviation.x += 3.3f * SizeModifier;
            }
            else
            {
                NextDeviation.x += 2.5f * SizeModifier;
            }
        }

        else
        {
            if (AllDirections[AllDirections.Count - 2])
            {
                NextDeviation.x -= 3.3f * SizeModifier;
            }
            else
            {
                NextDeviation.x -= 2.5f * SizeModifier;
            }
        }

        if (AllDirections[AllDirections.Count - 2])
        {
            Tracks[0].transform.position = NextDeviation;
            if (LeftOrRight)
            {
                Scale = Tracks[0].transform.localScale;
                Scale.y *= -1;
                Tracks[0].transform.localScale = Scale;

            }
        }
        else
        {
            Tracks[0].transform.position = NextDeviation;
            if (!LeftOrRight)
            {
                Scale = Tracks[0].transform.localScale;
                Scale.y *= -1;
                Tracks[0].transform.localScale = Scale;
            }


        }
        TurnPoints.Add(Tracks[0].transform.position);
        Tracks.Add(Tracks[0]);
        Tracks.RemoveAt(0);

        NextDeviation.z += 6 * SizeModifier;

        LRindex++;*/
       SpawnAllMeshes(1);
    }


    public void ResetWorld()
    {
       
    }

    bool LorR()
    {
        var randomNumber = Random.Range(0f, 2f); //Generates number between 1 & 2
        //Debug.Log(randomNumber);
        if (randomNumber > 1)
        {
            if (CheckForRepeat(true)) return true;
            else return LorR();
        }



        else
        {
            if (CheckForRepeat(false)) return false;
            else return LorR();
        }
            
    }

    bool CheckForRepeat(bool TorF)
    {
        if (AllDirections.Count > 3)
        {
            if (AllDirections[AllDirections.Count - 1] == AllDirections[AllDirections.Count - 2] && (AllDirections[AllDirections.Count - 1]==TorF))
            {
                return false;
            }

            else
            {
                return true;
            }
        }
        else
        {
            return true;
        }
       
    }

    void OnGUI()
    {
        if (GUI.Button(new Rect(10, 10, 150, 100), "update"))
        {
            UpdatePlanes();
        }
    }
      
}




