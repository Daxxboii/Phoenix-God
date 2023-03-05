using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlternateWorldGenerator : MonoBehaviour
{
    public GameObject

            PlaneR,
            PlaneL;

    [HideInInspector]
    public List<Vector3> TurnPositions = new List<Vector3>();

    [HideInInspector]
    public List<bool> AllDirections = new List<bool>();

  

    [Range(0, 50)]
    public int NumberOfPlanes;

    [Range(-4.6f, 14f)]
    public float Y_Offset;

    [Range(0, 50)]
    public float

            PlaneScaleX,
            PlaneScaleZ;

    Vector3 NextSpawn;

    public Vector3 Rotation;

    private GameObject Parent;

    public GameObject CurveL, CurveR;

    bool LastDir = true;

    bool Dir;


    public static AlternateWorldGenerator Singleton;

    void Start()
    {
        if (Singleton == null) Singleton = this;
        Parent = new GameObject("Parent");
        Spawn();
    }

    // Update is called once per frame
    void Spawn()
    {
        #region LRR
        AllDirections.Add(false);
        AllDirections.Add(true);
        AllDirections.Add(true);

        NextSpawn = new Vector3(0f, Y_Offset, 0f);
        TurnPositions.Add(NextSpawn);

        InstantiatePlane(PlaneL);


        NextSpawn = new Vector3(-3f * PlaneScaleX, Y_Offset, 3f * PlaneScaleZ);
        TurnPositions.Add(NextSpawn);

        InstantiateCurve(CurveL);
        NextSpawn.z += PlaneScaleZ;
        InstantiatePlane(PlaneR);

        NextSpawn = new Vector3(0f, Y_Offset, 7f * PlaneScaleZ);
        TurnPositions.Add(NextSpawn);

        InstantiatePlane(PlaneR);

        #endregion

        LastDir = true;

        for (int i = 0; i < NumberOfPlanes - 3; i++)
        {
            SpawnSingle();
        }
    }


    public void SpawnMorePlanes()
    {
        SpawnSingle();
    }

    bool LorR()
    {
        var randomNumber = Random.Range(0f, 2f); //Generates number between 1 & 2
        bool Decide = false;
        if (randomNumber > 1)
            Decide = true;
        else
            Decide = false;

        //Debug.Log(randomNumber);
        if (
            (
            AllDirections[AllDirections.Count - 1] ==
            AllDirections[AllDirections.Count - 2]
            ) &&
            (AllDirections[AllDirections.Count - 2] == Decide) &&
            (AllDirections[AllDirections.Count - 3] == Decide)
        )
        {
            return LorR();
        }
        else
        {
            return Decide;
        }
    }

    public void ResetWorld()
    {
        foreach (Transform t in Parent.transform)
        {
            Destroy(t.gameObject);
        }
        AllDirections.Clear();
        TurnPositions.Clear();
        //AllPlanes.Clear();
        NextSpawn = Vector3.zero;
        LastDir = false;
        Start();
    }
    public void InstantiatePlane(GameObject DirPlane)
    {
        var plane = Instantiate(DirPlane, NextSpawn, Quaternion.identity);
        plane.transform.eulerAngles = Rotation;
        plane.transform.localScale =
            new Vector3(plane.transform.localScale.x * PlaneScaleX,
                plane.transform.localScale.y * PlaneScaleZ,
                plane.transform.localScale.z * PlaneScaleZ);
        plane.transform.SetParent(Parent.transform);
       // AllPlanes.Add(plane);
    }

    public void SpawnSingle()
    {
        NextSpawn.z += 3 * PlaneScaleZ;
        Dir = LorR();

        //if last turn is same
        if (LastDir == Dir)
        {
            if (LastDir == false) NextSpawn.x -= 3 * PlaneScaleX;
            else NextSpawn.x += 3 * PlaneScaleX;
        }
        //if last turn is not same
        else
        {
            if (LastDir == true)
            {
                NextSpawn.x += 3 * PlaneScaleX;
                InstantiateCurve(CurveR);
            }
            else
            {
                NextSpawn.x -= 3 * PlaneScaleX;
                InstantiateCurve(CurveL);

            }

            NextSpawn.z += PlaneScaleZ;


        }

        //Spawning
        if (Dir) InstantiatePlane(PlaneR);
        else InstantiatePlane(PlaneL);

        TurnPositions.Add(NextSpawn);
        AllDirections.Add(Dir);
        LastDir = Dir;
    }

    public void InstantiateCurve(GameObject Curve)
    {
        var curve = Instantiate(Curve, NextSpawn, Quaternion.identity);
        curve.transform.eulerAngles += Rotation;
        curve.transform.localScale = new Vector3(1.5f*curve.transform.localScale.x * PlaneScaleX, curve.transform.localScale.y * PlaneScaleZ, curve.transform.localScale.z * PlaneScaleZ);
        //curve.transform.localPosition = new Vector3(NextSpawn.x, NextSpawn.y, NextSpawn.z);
        curve.transform.SetParent(Parent.transform);
    }

}
