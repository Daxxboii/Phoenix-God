using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI.Extensions;
using DG.Tweening;
//using System;
using MyBox;

public class AlternateWorldGenerator : MonoBehaviour
{
    public static AlternateWorldGenerator Singleton;

    public List<Vector3> TurnPositions = new List<Vector3>();


    public List<bool> AllDirections = new List<bool>();
    public List<GameObject> AllPlanes = new List<GameObject>();

    //public Vector3[] StartTurns;

    [Range(10, 500)] public float YDistance = 10;
    [Range(10, 500)] public float XDistance = 10;

    public Material StartupPlaneMaterial;
    public Color[] StartUpPlaneColors;
    public int StartUpPlaneColorIndex = 0;

    public Vector3 StartupSpawnLoc;

    // bool LastDir = true;
    bool Dir;
    public int StartSpawn;

    Vector3 NextSpawn;

    public Transform Camera;
    // public LineRenderer Planes;

    public GameObject Hexagon;
    public int HexagonIndex;


    public void ResetWorld()
    {
        Debug.Log("Generator Reset World");
        //Player.Singleton.Start();
        AllDirections.Clear();
        TurnPositions.Clear();
        foreach (var Road in AllPlanes)
        {
            Destroy(Road);
        }
        AllPlanes.Clear();
        StartSpawn = 0;
        HexagonIndex = 0;


        StartupPlaneMaterial.color = StartUpPlaneColors[StartUpPlaneColorIndex]; // Convert back to RGB and assign to the material


        StartupPlaneMaterial.SetColor("_EmissionColor", StartUpPlaneColors[StartUpPlaneColorIndex]); // Convert back to RGB and assign to the emission color
        StartUpPlaneColorIndex++;
        if (StartUpPlaneColorIndex >= 8)
        {
            StartUpPlaneColorIndex = 0;
        }
        SpawnStart();
    }

    void Awake()
    {
        if (Singleton == null) Singleton = this;
        StartupPlaneMaterial.color = StartUpPlaneColors[StartUpPlaneColorIndex]; // Convert back to RGB and assign to the material


        StartupPlaneMaterial.SetColor("_EmissionColor", StartUpPlaneColors[StartUpPlaneColorIndex]); // Convert back to RGB and assign to the emission color
        StartUpPlaneColorIndex++;
    }
    void Start()
    {
        SpawnStart();
    }

    void SpawnStart()
    {
        NextSpawn = StartupSpawnLoc;
        SpawnSingle();
        SpawnSingle();
        SpawnSingle();

        Debug.Log("Spawning");
    }

    public void SpawnSingle()
    {
        if (AllDirections.Count > 4)
        {
            Destroy(AllPlanes[0]);
            AllPlanes.RemoveAt(0);
        }
        Dir = LorR();

        if (Dir)
        {
            NextSpawn = new Vector3(NextSpawn.x + XDistance, NextSpawn.y, NextSpawn.z + YDistance);
        }
        else
        {
            NextSpawn = new Vector3(NextSpawn.x - XDistance, NextSpawn.y, NextSpawn.z + YDistance);
        }
        TurnPositions.Add(NextSpawn);
        AllDirections.Add(Dir);

        Spawn(Dir);
    }


    bool LorR()
    {
        if (AllDirections.Count > 4)
        {
            var Decide = (Random.Range(0, 2) == 0) ? false : true;
            bool latestValue = AllDirections[AllDirections.Count - 1];
            bool secondLatestValue = AllDirections[AllDirections.Count - 2];
            bool thirdLatestValue = AllDirections[AllDirections.Count - 3];

            if (latestValue == secondLatestValue == thirdLatestValue)
            {
                // If they are the same, return the opposite of randomDecision
                return !latestValue;
            }

            return Decide;
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
                    return false;

                case 2:
                    StartSpawn++;
                    return true;

                default:
                    return false;
            }
        }
    }

    public void Spawn(bool Dir)
    {
        var HexagonPlane = Instantiate(Hexagon);
        HexagonPlane.transform.position = TurnPositions[HexagonIndex];
        HexagonIndex++;
        HexagonPlane.transform.rotation = Dir ? HexagonPlane.transform.rotation * Quaternion.Euler(0, 70, 0) : HexagonPlane.transform.rotation * Quaternion.Euler(0, -70, 0);
        AllPlanes.Add(HexagonPlane);
    }
}