using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
//using MyBox;
public class GameManager : MonoBehaviour
{
    public delegate void Trigger();
    public static event Trigger ReceivedTouched;

    [Header("Procedural Generation")] 
    //Getting Both Width And Length of floor planes
    [SerializeField,Range(0f,100f)] private float Width;
    [SerializeField,Range(0f, 100f)] private float Length;

    //How tilted should the path be
    [SerializeField,Range(0f, 100f),Tooltip("Slant for the pant")] private float X_Offset;

    //How High the path should be
    [SerializeField] private float Y_Position;
    [SerializeField, Range(0, 50)] private int TrackMaxLength;

    //Material for the path
    [SerializeField] private Material Track_Material;

    //Empty Variables to be assigned and generated later
    private Mesh TrackR, TrackL;//Left and Right Track Meshes
    private GameObject dummy;
    private GameObject AllFloors,PreviousSpawnedPlane; //To keep track of all built floors
    private Vector3 OffsetBetweenPlanes;
    private List<GameObject> AllPathsList;
    private bool decideLeftOrRight;

    private void Awake()
    {
        CreateBaseMeshes(); // Will Create a Left Mesh and Right Mesh
        SetUpDummyMesh(); // Creates an empty gameobject with mesh filter
        CreateStartLayout();// spawns empty gameobject with random L or R base mesh
    }

    #region World Generation
    void CreateBaseMeshes()
    {
        TrackL = new Mesh();
        TrackR = new Mesh();

        Vector3[] vertices = new Vector3[4];

        vertices[0] = new Vector3(-Width, 0, -Length);
        vertices[1] = new Vector3(-Width + X_Offset, 0, Length);
        vertices[2] = new Vector3(Width + X_Offset, 0, Length);
        vertices[3] = new Vector3(Width, 0, -Length);

        TrackL.vertices = vertices;
        TrackL.triangles = new int[] { 0, 1, 2, 0, 2, 3 };

        vertices[0] = new Vector3(-Width, 0, -Length);
        vertices[1] = new Vector3(-Width - X_Offset, 0, Length);
        vertices[2] = new Vector3(Width - X_Offset, 0, Length);
        vertices[3] = new Vector3(Width, 0, -Length);

        TrackR.vertices = vertices;
        TrackR.triangles = new int[] { 0, 1, 2, 0, 2, 3 };
    }

    void SetUpDummyMesh()
    {
        dummy = new GameObject("Ground_Plane");
        dummy.AddComponent<MeshRenderer>().material = Track_Material;
        dummy.GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        dummy.AddComponent<MeshFilter>();
    }

    void CreateStartLayout()
    {
        AllFloors = new GameObject("All_Floors");
        AllPathsList = new List<GameObject>();

        OffsetBetweenPlanes = new Vector3();
        OffsetBetweenPlanes.y = Y_Position;

        for(int i = 0; i < TrackMaxLength; i++)
        {
            GameObject SpawnedPlane = Instantiate(dummy);
            SpawnedPlane.GetComponent<MeshFilter>().mesh = decideLeftOrRight.RandomTrueOrFalse() ?TrackL:TrackR;
            DecidePlaneXOffset(SpawnedPlane);
            SpawnedPlane.transform.position = OffsetBetweenPlanes;
            SpawnedPlane.transform.SetParent(AllFloors.transform);
            OffsetBetweenPlanes.z += Length*2;
            PreviousSpawnedPlane = SpawnedPlane;
            AllPathsList.Add(SpawnedPlane);
        }
    }

    void DecidePlaneXOffset(GameObject SpawnedPlane)
    {
        if (PreviousSpawnedPlane != null)
        {
            Mesh SpawnedPlaneFilter = SpawnedPlane.GetComponent<MeshFilter>().sharedMesh;
            Mesh PreviousPlaneFilter = PreviousSpawnedPlane.GetComponent<MeshFilter>().sharedMesh;

            if ((SpawnedPlaneFilter == TrackL && PreviousPlaneFilter == TrackR)|| (SpawnedPlaneFilter == TrackR && PreviousPlaneFilter == TrackR))
            {
                OffsetBetweenPlanes.x -= X_Offset;
            }
            else 
            {
                OffsetBetweenPlanes.x += X_Offset;
            }
        }
    }

    #endregion

    #region Events
    private void Update()
    {
#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            ReceivedTouched.Invoke();
        }
#endif

#if UNITY_ANDROID
        if (Input.touchCount > 0)
        {
            ReceivedTouched.Invoke();
        }
#endif
    }

    private void CheckForTouch()
    {

    }

    #endregion
}
