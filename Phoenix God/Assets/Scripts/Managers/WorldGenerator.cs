using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class WorldGenerator : MonoBehaviour
{
    
    [Header("Procedural Generation")]
    //Getting Both Width And Length of floor planes
    [SerializeField, Range(0f, 100f)] public float Width;

    //How High the path should be
    [SerializeField, Range(-50f, 10f)] private float Height;

    //How Tilted the Plane should be
    [SerializeField, MinMaxSlider(1f, 50f)] private Vector2 LRDeviation;

    //How Long the Plane should be
    [SerializeField, MinMaxSlider(1f, 200f)] private Vector2 FwdDeviation;

    //Number Of Turns
    [SerializeField, Range(2, 10)] private int MaxNumberOfTurns;

    //Run Up For Player
    [SerializeField, Range(0, 200)] private int RunUpDistance;

    //Material for the path
    [SerializeField] private Material Track_Material;

    //List Of all turns
    [HideInInspector]public List<Vector3> TurnPositions;

    //Mesh Generation Triangle Positions
    private int[] triangles = { 0, 2, 1, 2, 3, 1 };

    //Rotation for All Planes
    [SerializeField] private Vector3 ParentRotation;

    //List of All Meshes
    [HideInInspector] List<Mesh> AllMeshes = new List<Mesh>();

    //List of All Planes
    [HideInInspector] public List<GameObject> AllTracks = new List<GameObject>();

    //List Of Vertices at turns
    [HideInInspector] List<Vector3> AllVertices = new List<Vector3>();

    //Dummy Track
    private GameObject Track;

    //Instructions
    [SerializeField] private GameObject LeftCanvas;
    [SerializeField] private GameObject RightCanvas;

    [SerializeField, Range(1f, 50f)] private float DistanceOfInstructions;

    Vector3 NextDeviation, LatestPoint;

    public static WorldGenerator Singleton;

    int LeftOrRight;

    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        Player.PlanesHaveChanged += UpdatePlanes;
        GenerateStartingWorld();
    }

    #region World Generation
    void GenerateStartingWorld()
    {
        Track = new GameObject("Track");
        Track.AddComponent<MeshFilter>();
        Track.AddComponent<MeshRenderer>();
        SpawnAllMeshes();
    }

    void SpawnAllMeshes()
    {
        //Run Up
        TurnPositions.Add(Vector3.zero);
            
        Vector3 straightRunUpPath = new Vector2(0, RunUpDistance);
        TurnPositions.Add(straightRunUpPath);

        LatestPoint = straightRunUpPath;

        //Get A line
        for (int i = 1; i <= MaxNumberOfTurns; i++)
        {
            //Distributing Points
            NextDeviation = new Vector2(Random.Range(LRDeviation.x, LRDeviation.y), Random.Range(FwdDeviation.x, FwdDeviation.y));

            //Checking if point should go left or right
            if (i % 2 == 0) { LatestPoint.x = NextDeviation.x; LeftOrRight = 1; }
            else { LatestPoint.x = -NextDeviation.x; LeftOrRight = -1; }

            LatestPoint.y += NextDeviation.y;

            TurnPositions.Add(LatestPoint);
        }

        //Parent for all planes
        var Parent = new GameObject("Parent");

        Vector3 UpdatedLRPosition;


        //Spawn LR Points along line 
        foreach (Vector2 turn in TurnPositions)
        {
            UpdatedLRPosition = turn;
            UpdatedLRPosition.x -= Width;
            AllVertices.Add(UpdatedLRPosition);

            UpdatedLRPosition = turn;
            UpdatedLRPosition.x += Width;
            AllVertices.Add(UpdatedLRPosition);
        }

        var _VertIndex = 0;

        //Turn All Vertices into Meshes
        for (int i = 0; i <= MaxNumberOfTurns; i++)
        {
            Mesh TrackMesh = new Mesh();
            TrackMesh.name = "Procedural Track";

            List<Vector3> verts = new List<Vector3>();
            for (int j = 0; j <= 3; j++)
            {
                verts.Add(AllVertices[_VertIndex]);
                _VertIndex++;
            }
            _VertIndex -= 2;


            TrackMesh.vertices = verts.ToArray();
            TrackMesh.triangles = triangles;

            AllMeshes.Add(TrackMesh);

            var Plane = Instantiate(Track);
            Plane.transform.SetParent(Parent.transform);
            Plane.GetComponent<MeshRenderer>().sharedMaterial = Track_Material;
            Plane.GetComponent<MeshFilter>().sharedMesh = TrackMesh;
            Plane.AddComponent<MeshCollider>();
            Plane.layer = 9;

            AllTracks.Add(Plane);
        }

        Parent.transform.eulerAngles = ParentRotation;

        Vector3 PlanePos = new Vector3(0, Height, 0);
        Parent.transform.position = PlanePos;

        //Instructions
        Vector3 temppos;
        temppos = AllTracks[1].GetComponent<MeshRenderer>().bounds.center;
        temppos.x -= DistanceOfInstructions;
        temppos.y += 10;
        LeftCanvas.transform.position = temppos;

        temppos = AllTracks[2].GetComponent<MeshRenderer>().bounds.center;
        temppos.x += DistanceOfInstructions;
        temppos.y += 10;
        RightCanvas.transform.position = temppos;
    }
    #endregion


    public void UpdatePlanes()
    {
        StartCoroutine(UpdatePlanesOnRuntime());
    }

     IEnumerator UpdatePlanesOnRuntime()
    {
        yield return new WaitForSeconds(1.5f);
        Vector3 UpdatedLRPosition;
        NextDeviation = new Vector2(Random.Range(LRDeviation.x, LRDeviation.y), Random.Range(FwdDeviation.x, FwdDeviation.y));

        if (LeftOrRight == 1)
        {
            LatestPoint.x = -NextDeviation.x;
            LeftOrRight = -1;
        }
        else
        {
            LatestPoint.x = NextDeviation.x;
            LeftOrRight = 1;
        }

        LatestPoint.y += NextDeviation.y;

        TurnPositions.Add(LatestPoint);

        UpdatedLRPosition = TurnPositions[TurnPositions.Count-1];
        UpdatedLRPosition.x -= Width;
        AllVertices.Add(UpdatedLRPosition);

        UpdatedLRPosition = TurnPositions[TurnPositions.Count - 1];
        UpdatedLRPosition.x += Width;
        AllVertices.Add(UpdatedLRPosition);

        List<Vector3> Verts = new List<Vector3>();

        for(int i = 0; i < 4; i++)
        {
            Verts.Add(AllVertices[AllVertices.Count - 1 - i]);
        }

        AllMeshes[0].vertices = Verts.ToArray();
        AllMeshes[0].triangles = triangles;
        AllMeshes[0].RecalculateBounds();
       
        AllMeshes.Add(AllMeshes[0]);
        AllMeshes.RemoveAt(0);

        AllTracks[0].GetComponent<MeshCollider>().sharedMesh = AllMeshes[AllMeshes.Count-1];


        AllTracks.Add(AllTracks[0]);
        AllTracks.RemoveAt(0);

    }

    public void ResetWorld()
    {
        GameObject parent = GameObject.Find("Parent");
        if (parent != null) Destroy(parent);

        GameObject Track = GameObject.Find("Track");
        if (Track != null) Destroy(Track);

        AllTracks.Clear();
        AllVertices.Clear();
        AllMeshes.Clear();
        GenerateStartingWorld();

    }



}
