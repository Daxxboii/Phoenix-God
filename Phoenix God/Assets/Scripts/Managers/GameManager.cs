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

    [Range(0f, 10f),Tooltip("Will spawn twice the number of planes,one for each direction"),SerializeField] private int No_of_Planes_to_pool;//Exact number of planes to start with
    [Range(0f, 10f),SerializeField] private float Distance_between_planes;//Offset between each plane

    private List<GameObject> Left_Ground_Planes, Right_Ground_Planes;//Lists to add track of planes


    private void Awake()
    {
        PoolFloorObjects();
    }


    #region World Generation

    //All over pooling Handler
    void PoolFloorObjects()
    {
        PoolObjects(PlaneLeft,Left_Ground_Planes,No_of_Planes_to_pool);
        PoolObjects(PlaneRight,Right_Ground_Planes,No_of_Planes_to_pool);
    }

    //For Spawning Planes at Start
    void PoolObjects(GameObject plane, List<GameObject> ListToAdd, int Number_of_planes)
    {
        ListToAdd = new List<GameObject>();
        for (int i = 0; i < No_of_Planes_to_pool; i++)
        {
            GameObject spawnedPlane = Instantiate(plane, transform.position, Quaternion.identity);
            ListToAdd.Add(spawnedPlane);
        }
    }


    #endregion
}
