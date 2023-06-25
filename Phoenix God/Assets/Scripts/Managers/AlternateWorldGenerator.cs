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

    public Vector3[] StartTurns;

    [Range(10, 500)] public float YDistance = 10;
    [Range(10, 500)] public float XDistance = 10;

    bool LastDir = true;
    bool Dir;
    int StartSpawn;

    Vector3 NextSpawn;

    public Transform Camera;
    public LineRenderer Planes;

    //public Player player;
    void Start()
    {
        if (Singleton == null) Singleton = this;
        SpawnStart();
    }

    void SpawnStart()
    {
        LastDir = false;

        Planes.positionCount = 3;

        Planes.SetPosition(0, StartTurns[0]);
        Planes.SetPosition(1, StartTurns[1]);
        Planes.SetPosition(2, StartTurns[2]);

        TurnPositions.Add(Planes.GetPosition(0));
        TurnPositions.Add(Planes.GetPosition(1));
        TurnPositions.Add(Planes.GetPosition(2));


        NextSpawn = Planes.GetPosition(2);
        

        AllDirections.Add(false);
        AllDirections.Add(true);

       
    }

    public void SpawnSingle()
    {
      
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

            Planes.positionCount = TurnPositions.Count;
            Planes.SetPosition(TurnPositions.Count - 1, NextSpawn);

            LastDir = Dir;
        

    }


    bool LorR()
    {
        var randomNumber = Random.Range(0f, 2f); //Generates number between 1 & 2
        bool Decide;
        if (randomNumber > 1)
            Decide = true;
        else
            Decide = false;

       
        if (AllDirections.Count > 4)
        {
            bool topValue = AllDirections[AllDirections.Count - 1];
            bool secondValue = AllDirections[AllDirections.Count - 2];
            bool thirdValue = AllDirections[AllDirections.Count - 3];

            if ((topValue!=secondValue))
            {
                return Decide;
            }
            else 
            {
                if(topValue == thirdValue)
                {
                    return !topValue;
                }
                else
                {
                    return Decide;
                }
               
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
        AllDirections.Clear();
        TurnPositions.Clear();

        //AllPlanes.Clear();
        NextSpawn = Vector3.zero;
        LastDir = false;
        StartSpawn = 0;
        Start();
    }


   
}