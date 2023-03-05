
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    [SerializeField, Range(20, 100)] public int PoolCount;

    [HideInInspector]public List<GameObject> LeftCurves, RightCurves, LeftPlanes, RightPlanes = new List<GameObject>();

    public GameObject CurveL, CurveR, LeftPlane, RightPlane;

    private GameObject parent;
    Vector3 PlanesScale;

    void Start()
    {
        parent = new GameObject("Pooled Parent");
        Spawn(LeftPlanes, LeftPlane);
        Spawn(RightPlanes, RightPlane);
        Spawn(LeftCurves, CurveL);
        Spawn(RightCurves, CurveR);
      
    }

    void Spawn(List<GameObject> list, GameObject gameObjectToSpawm)
    {
        for (int i = 0; i < PoolCount; i++)
        {
            GameObject SpawnedObject = Instantiate(gameObjectToSpawm, transform.position, Quaternion.identity);
            SpawnedObject.transform.SetParent(parent.transform);
            list.Add(SpawnedObject);
        }
    }

}
