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
    //Getting Both Width And Length of floor planes
    [SerializeField, Range(0f, 100f)] public float Width;

    //How High the path should be
    [SerializeField, Range(-50f, 10f)] private float Height;

    //How Tilted the Plane should be
    [SerializeField,Range(0f,10f)] private float LRDeviation;

    //How Long the Plane should be
    [SerializeField, Range(1f, 300f)] private float FwdDeviation;

    //Number Of Turns
    [SerializeField, Range(2, 30)] private int MaxNumberOfTurns;

    //Run Up For Player
   // [SerializeField, Range(0, 200)] private int RunUpDistance;

    //Material for the path
    [SerializeField] private Material Track_Material;

    //List Of all turns
    public List<Vector3> TurnSegments;

    //Mesh Generation Triangle Positions
    private int[] triangles = { 0, 2, 1, 2, 3, 1 };

    //Rotation for All Planes
    [SerializeField] private Vector3 ParentRotation;

    //List of All Meshes
    [HideInInspector] List<Mesh> AllMeshes = new List<Mesh>();

    //List of All Planes
    [HideInInspector] public List<GameObject> AllTracks = new List<GameObject>();

    //List of All Trackers
    [HideInInspector] public List<GameObject> AllTrackers = new List<GameObject>();

    //List Of Directions
     public List<bool> AllDirections = new List<bool>();

    //List Of Vertices at turns
     public List<Vector3> AllVertices = new List<Vector3>();

    //Dummy Track
    private GameObject Track,Trackers;

  

    Vector3 NextDeviation, LatestPoint;

    public static WorldGenerator Singleton;

    int LeftOrRight;

    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        Player.PlanesHaveChanged += UpdatePlanes;
        GenerateStartingWorld();
    }

    #region World Generation Beginning
    void GenerateStartingWorld()
    {
        Track = new GameObject("Track");
        Track.AddComponent<MeshFilter>();
        Track.AddComponent<MeshRenderer>();
        SpawnAllMeshes();
    }

    void SpawnAllMeshes()
    {
        TurnSegments.Add(Vector3.zero);
        //Get A line
        for (int i = 1; i <= MaxNumberOfTurns; i++)
        {
            //Distributing Points
            NextDeviation = new Vector2(LRDeviation, FwdDeviation);

            var LR = LorR();
            AllDirections.Add(LR);

            if (LR)
            {
                LatestPoint.x += NextDeviation.x;
            }
            else
            {
                LatestPoint.x -= NextDeviation.x;
            }

           

            LatestPoint.y += NextDeviation.y;

            TurnSegments.Add(LatestPoint);
        }

        //Parent for all planes
        var Parent = new GameObject("Parent");

       

        Trackers = new GameObject("Trackers");
        Trackers.transform.SetParent(Parent.transform);


        foreach (Vector2 turn in TurnSegments)
        {
            var Tracker = new GameObject("PlayerTracker");
            Tracker.transform.position = turn;
            Tracker.transform.SetParent(Trackers.transform);

            AllTrackers.Add(Tracker);
        }

        Vector3 UpdatedLRPosition;
        //Spawn LR Points along line 
        foreach (Vector2 turn in TurnSegments)
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
        for (int i = 0; i <MaxNumberOfTurns; i++)
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
           // Debug.Log(_VertIndex);

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
    }
    #endregion


    public void UpdatePlanes()
    {
       StartCoroutine(UpdatePlanesOnRuntime());
    }

     IEnumerator UpdatePlanesOnRuntime()
    {
        yield return new WaitForSeconds(0f);
        if (GameManager.GameManagerInstance.isPlaying)
        {
            Vector3 UpdatedLRPosition;
            NextDeviation = new Vector2(LRDeviation, FwdDeviation);

            var LR = LorR();
            AllDirections.Add(LR);

            if (LR)
            {
                LatestPoint.x += NextDeviation.x;
            }
            else
            {
                LatestPoint.x -= NextDeviation.x;
            }

            LatestPoint.y += NextDeviation.y;

            TurnSegments.Add(LatestPoint);

            UpdatedLRPosition = TurnSegments[TurnSegments.Count - 1];
            UpdatedLRPosition.x -= Width;
            AllVertices.Add(UpdatedLRPosition);

            UpdatedLRPosition = TurnSegments[TurnSegments.Count - 1];
            UpdatedLRPosition.x += Width;
            AllVertices.Add(UpdatedLRPosition);

            List<Vector3> Verts = new List<Vector3>();

            for (int i = 0; i < 4; i++)
            {
                Verts.Add(AllVertices[AllVertices.Count - 1 - i]);
            }

            AllMeshes[0].vertices = Verts.ToArray();
            AllMeshes[0].triangles = triangles;
            AllMeshes[0].RecalculateBounds();


            AllMeshes.Add(AllMeshes[0]);
            AllMeshes.RemoveAt(0);

            AllTracks[0].GetComponent<MeshCollider>().sharedMesh = AllMeshes[AllMeshes.Count - 1];

            AllTrackers[0].transform.position = AllTracks[0].transform.TransformPoint((AllTracks[0].GetComponent<MeshFilter>().sharedMesh.vertices[0]+ AllTracks[0].GetComponent<MeshFilter>().sharedMesh.vertices[1])/2f);
            AllTrackers.Add(AllTrackers[0]);
            AllTrackers.RemoveAt(0);

            AllTracks.Add(AllTracks[0]);
            AllTracks.RemoveAt(0);
        }
    }


    public void ResetWorld()
    {
        GameObject parent = GameObject.Find("Parent");
        if (parent != null) Destroy(parent);

        GameObject Track = GameObject.Find("Track");
        if (Track != null) Destroy(Track);

        NextDeviation = Vector3.zero;
        LatestPoint = Vector3.zero;

        AllTracks.Clear();
        AllVertices.Clear();
        AllMeshes.Clear();
        TurnSegments.Clear();
        AllTrackers.Clear();
        AllDirections.Clear();
        GenerateStartingWorld();
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




