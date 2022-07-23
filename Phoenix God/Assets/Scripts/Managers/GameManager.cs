using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using MyBox;
public class GameManager : MonoBehaviour
{
    //[Foldout("World Generation",true)]
    [Header("Pooling")]

    [SerializeField] public GameObject PlaneLeft;//Plane Facing Right
    [SerializeField] private GameObject PlaneRight;//Plane Facing Left

    [Range(0f, 50f),Tooltip("Will spawn twice the number of planes,one for each direction"),SerializeField] private int No_of_Planes_to_pool;//Exact number of planes to start with
    [Range(0f, 10f),SerializeField] private float Distance_between_planes;//Offset between each plane
    [Range(1f, 10f),SerializeField] private float PlaneScale,PlaneScaleLong;
    [SerializeField] private Vector3 PlaneInitialRotation;

    private List<GameObject> Left_Ground_Planes, Right_Ground_Planes,All_Ground_Planes;//Lists to add track of planes
    private GameObject AllPaths;
    private Vector3 LatestPlanePosition;
    private int index;//To keep count during loops


    private void Awake()
    {
        PoolFloorObjects();
    }


    #region World Generation

    //All over pooling Handler
    void PoolFloorObjects()
    {
        AllPaths = new GameObject("All Paths");//Parenting for a tidy hierarchy
        //AllPaths.transform.localRotation = PlaneInitialRotation;
        All_Ground_Planes = new List<GameObject>();
        PoolObjects(PlaneRight,Right_Ground_Planes,No_of_Planes_to_pool);
        PoolObjects(PlaneLeft, Left_Ground_Planes, No_of_Planes_to_pool);
        SortAtStart();
    }

    //For Spawning Planes at Start
    void PoolObjects(GameObject plane, List<GameObject> ListToAdd, int Number_of_planes)
    {
        ListToAdd = new List<GameObject>();
        for (int i = 0; i < No_of_Planes_to_pool; i++)
        {
            GameObject spawnedPlane = Instantiate(plane, transform.position, Quaternion.identity);
            spawnedPlane.transform.eulerAngles = PlaneInitialRotation;
            //spawnedPlane.transform.localS= PlaneScaleLong;
            spawnedPlane.transform.localScale *= PlaneScale;
            ListToAdd.Add(spawnedPlane);
            spawnedPlane.transform.SetParent(AllPaths.transform);
            All_Ground_Planes.Add(spawnedPlane);
        }
    }
    //For Sorting Planes At Start
    void SortAtStart()
    {
        index = 0;
       All_Ground_Planes.Shuffle();
        for (int i = 0; i < No_of_Planes_to_pool*2; i++)
        {
            All_Ground_Planes[index].transform.position = LatestPlanePosition;
            LatestPlanePosition.z += Distance_between_planes*PlaneScale;
            index++;
        }
    }
    //For spawning and despawning planes while playing
    void SortDuringPlayMode()
    {

    }

    #endregion

   
}
