using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlternateWorldGenerator : MonoBehaviour
{

    //[HideInInspector]
    public List<Vector3> TurnPositions = new List<Vector3>();

    [HideInInspector]
    public List<bool> AllDirections = new List<bool>();

    //[HideInInspector]
    public List<GameObject> AllPlanes = new List<GameObject>();



    private int NumberOfPlanes;

    [Range(-4.6f, 14f)]
    public float Y_Offset;

    [Range(0, 50)]
    public float

            PlaneScaleX,
            PlaneScaleZ;

    Vector3 NextSpawn;

    public Vector3 Rotation;

    private GameObject Parent;
    bool LastDir = true;

    bool Dir;


    public static AlternateWorldGenerator Singleton;
    public PoolManager _PoolManager;
    private int LPlaneIndex, RPlaneIndex;
    private int LCurveIndex, RCurveIndex;
    GameObject plane, curve;
    Vector3 PlanesScale, CurveScale;
    int StartSpawn;

    public Material PathMaterialWhite;
    MeshRenderer Pathrenderer,CurveRenderer;

    public GameObject Clouds;



    void Start()
    {
        if (Singleton == null) Singleton = this;
        Parent = new GameObject("Parent");
        PlanesScale = new Vector3(_PoolManager.LeftPlane.transform.localScale.x * PlaneScaleX,
                 _PoolManager.LeftPlane.transform.localScale.y * PlaneScaleZ,
                 _PoolManager.LeftPlane.transform.localScale.z * PlaneScaleZ);
        CurveScale = new Vector3(1.5f * _PoolManager.CurveL.transform.localScale.x * PlaneScaleX, _PoolManager.CurveL.transform.localScale.y * PlaneScaleZ, _PoolManager.CurveL.transform.localScale.z * PlaneScaleZ);

        NumberOfPlanes = (int)_PoolManager.PoolCount / 2;
        NextSpawn = new Vector3(0f, Y_Offset, 0f);
        RPlaneIndex = 0;
        LPlaneIndex = 0;
        Spawn();
    }

    // Update is called once per frame
    void Spawn()
    {
        LastDir = false;

        for (int i = 0; i < NumberOfPlanes - 3; i++)
        {
            SpawnSingle();
        }
    }

    public void SpawnSingle()
    {
        if (AllDirections.Count != 0) NextSpawn.z += 3 * PlaneScaleZ;
        Dir = LorR();

        //if last turn is same
        if (AllDirections.Count != 0)
        {
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
                    InstantiateCurve(_PoolManager.RightCurves, RCurveIndex);
                    RCurveIndex++;
                    if (RCurveIndex >= _PoolManager.PoolCount)
                    {
                        RCurveIndex = 0;
                    }
                }
                else
                {
                    NextSpawn.x -= 3 * PlaneScaleX;
                    InstantiateCurve(_PoolManager.LeftCurves, LCurveIndex);
                    LCurveIndex++;
                    if (LCurveIndex >= _PoolManager.PoolCount)
                    {
                        LCurveIndex = 0;
                    }

                }

                NextSpawn.z += PlaneScaleZ;
            }
        }

        //Spawning
        if (Dir)
        {
            InstantiatePlane(_PoolManager.RightPlanes, RPlaneIndex);
            RPlaneIndex++;
            if (RPlaneIndex >= _PoolManager.PoolCount)
            {
                RPlaneIndex = 0;
            }
        }
        else
        {
            InstantiatePlane(_PoolManager.LeftPlanes, LPlaneIndex);
            LPlaneIndex++;
            if (LPlaneIndex >= _PoolManager.PoolCount)
            {
                LPlaneIndex = 0;
            }
        }

        TurnPositions.Add(NextSpawn);
        AllDirections.Add(Dir);
        LastDir = Dir;
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
        if (AllDirections.Count > 4)
        {
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
        else
        {
            switch (StartSpawn)
            {
                case 0:
                    StartSpawn++;
                    return false;
                case 1:
                    StartSpawn++;
                    return true;

                case 2:
                    StartSpawn++;
                    return true;

                default:
                    return false;
            }
        }
    }


    public void ResetWorld()
    {
        foreach (Transform t in Parent.transform)
        {
            t.position = new Vector3(0, 0, -500);
        }
        AllDirections.Clear();
        TurnPositions.Clear();
        AllPlanes.Clear();
        //AllPlanes.Clear();
        NextSpawn = Vector3.zero;
        LastDir = false;
        StartSpawn = 0;
        Start();
    }
    public void InstantiatePlane(List<GameObject> DirPlane, int index)
    {
        plane = DirPlane[index];
        plane.SetActive(true);
        plane.transform.position = NextSpawn;
        plane.transform.eulerAngles = Rotation;
        plane.transform.localScale = PlanesScale;
        plane.transform.SetParent(Parent.transform);

        Pathrenderer = plane.GetComponentInChildren<MeshRenderer>();
        Pathrenderer.sharedMaterial = PathMaterialWhite;
        Pathrenderer.enabled = true;

        AllPlanes.Add(plane);
    }



    public void InstantiateCurve(List<GameObject> DirCurve, int index)
    {
        curve = DirCurve[index];
        curve.SetActive(true);
        //curve.GetComponentInChildren<MeshRenderer>().enabled = true;
        CurveRenderer = curve.GetComponent<MeshRenderer>();
        CurveRenderer.enabled = true;
        
        CurveRenderer.sharedMaterial = PathMaterialWhite;
        curve.transform.position = NextSpawn;
        curve.transform.eulerAngles = Rotation;
        curve.transform.localScale = CurveScale;
        curve.transform.SetParent(Parent.transform);



        AllPlanes.Add(curve);



    }

}