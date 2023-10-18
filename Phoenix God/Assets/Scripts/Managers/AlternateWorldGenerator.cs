﻿using System.Collections;
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

    public Vector3[] StartTurns;

    [Range(10, 500)] public float YDistance = 10;
    [Range(10, 500)] public float XDistance = 10;

    public Material StartupPlaneMaterial;
    public Color[] StartUpPlaneColors;
    public int StartUpPlaneColorIndex = 0;

    

   // bool LastDir = true;
    bool Dir;
    int StartSpawn;

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
        foreach(var Road in AllPlanes){
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
        TurnPositions.Add(StartTurns[0]);
        TurnPositions.Add(StartTurns[1]);
        TurnPositions.Add(StartTurns[2]);

        Spawn(false);
        Spawn(true);
        Spawn(true);


        NextSpawn = StartTurns[2];
        

        AllDirections.Add(false);
        AllDirections.Add(true);
        Debug.Log("Spawning");
        
    }

    public void SpawnSingle()
    {
      Destroy(AllPlanes[0]);
      AllPlanes.RemoveAt(0);
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
        var Decide = (Random.Range(0, 2) == 0) ? false : true;


        if (AllDirections.Count > 4)
        {
            bool latestValue = AllDirections[AllDirections.Count - 1];
            bool secondLatestValue = AllDirections[AllDirections.Count - 2];

            if (latestValue == secondLatestValue)
            {
                // If they are the same, return the opposite of randomDecision
                return !Decide;
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
                    return true;

                case 2:
                    StartSpawn++;
                    return true;

                default:
                    return false;
            }
        }
    }
   
   public void Spawn(bool Dir){
    var HexagonPlane = Instantiate(Hexagon);
    HexagonPlane.transform.position = TurnPositions[HexagonIndex];
    HexagonIndex++;
    HexagonPlane.transform.rotation = Dir?HexagonPlane.transform.rotation*Quaternion.Euler(0,70,0):HexagonPlane.transform.rotation*Quaternion.Euler(0,-70,0);
    AllPlanes.Add(HexagonPlane);
   }
}