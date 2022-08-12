using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

//using MyBox;
public class GameManager : MonoBehaviour
{
    public static GameManager GameManagerInstance;//Make a GameManger instance accesible by everyone , Singleton

    [Header("Procedural Generation")] 
    //Getting Both Width And Length of floor planes
    [SerializeField,Range(0f,100f)] public float Width;

    //How High the path should be
    [SerializeField,Range(-50f,10f)] private float Y_Position;

    [SerializeField,HideInInspector] private List<Vector3> TurnPositions;
    [SerializeField] private List<Vector3> AllVertices;

    [SerializeField,Range(2,50)] private int MaxNumberOfTurns;

    [SerializeField,Range(0,10)] private int RunUpDistance;

    [SerializeField] private Vector3 ParentRotation;

    //How Tilted the Plane should be
    [SerializeField,MinMaxSlider(1f,50f)] private Vector2 LRDeviation;

    //How Long the Plane should be
    [SerializeField,MinMaxSlider(1f,100f)] private Vector2 FwdDeviation;

    [SerializeField,HideInInspector] List<GameObject> AllTracks;
   
    private GameObject Track;
  
    //Material for the path
    [SerializeField] private Material Track_Material;


    [Header("Player Related")]
    //Player GameObject
    [SerializeField] private GameObject Player;

    //For Inputs
    [SerializeField] public Vector2 LRInput;

    //Mesh Generation Triangle Positions
    private int[] triangles = {0,2,1,2,3,1};


    private void Awake()
    {
        if(GameManagerInstance == null)GameManagerInstance = this; //Singleton
    }

    public void SetUpWorldInEditor()
    {
        DestroyPreviousLayout();//Clean Up 
        DecidePointOfTurning();//Get Vertices
        SpawnPlanes();//Do Spwaning
    }


    #region World Generation

    private void OnValidate()
    {
        var Parent = GameObject.Find("Parent");
        if (Parent != null) { Parent.transform.eulerAngles = ParentRotation; }
    }

    public void DestroyPreviousLayout()
    {
        //All the positions where turns are made
        TurnPositions = new List<Vector3>(MaxNumberOfTurns);

        var Parent = GameObject.Find("Parent");
        DestroyImmediate(Parent);

        var Track = GameObject.Find("Track");
        DestroyImmediate(Track);
    }

    public void DecidePointOfTurning()
    {
        //Caching all points
        Vector3 PreviousPoint, CurrentPoint;
       
        PreviousPoint = Vector3.zero;
        CurrentPoint = Vector3.zero;

        for (int i = 1; i <= MaxNumberOfTurns; i++)
        {
            //Distributing Points
            PreviousPoint = new Vector3(Random.Range(LRDeviation.x, LRDeviation.y),  Random.Range(FwdDeviation.x, FwdDeviation.y),Y_Position);

            //Checking if plane should go left or right
            if (i % 2 == 0) CurrentPoint.x += PreviousPoint.x;
            else CurrentPoint.x -= PreviousPoint.x;

            CurrentPoint.y += PreviousPoint.y;

            TurnPositions.Add(CurrentPoint);
        }
    }

    public void SpawnPlanes()
    {
        Track = new GameObject("Track");
        Track.AddComponent<MeshFilter>();
        Track.AddComponent<MeshRenderer>();

        var Parent = new GameObject("Parent");
        


        AllVertices = new List<Vector3>();
        Vector3 UpdatedLRPosition;
        

        //Set all Vertex Points
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


        for(int i = 0; i < MaxNumberOfTurns*2; i++)
        {
            Mesh TrackMesh = new Mesh();
            TrackMesh.name = "Procedural Track";

            var Plane = Instantiate(Track);
            Plane.transform.SetParent(Parent.transform);


            List<Vector3> verts = new List<Vector3>();

            for (int j = 0; j <= 3; j++)
            {
                verts.Add(AllVertices[_VertIndex]);
                _VertIndex++;
            }
            _VertIndex -= 2;


            TrackMesh.vertices = verts.ToArray();
            TrackMesh.triangles = triangles;

            Plane.GetComponent<MeshFilter>().sharedMesh = TrackMesh;
            Plane.GetComponent<MeshRenderer>().sharedMaterial = Track_Material;
        }
        Parent.transform.eulerAngles = ParentRotation;
    }
    #endregion


}
