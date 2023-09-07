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

    public Vector3[] StartTurns;

    [Range(10, 500)] public float YDistance = 10;
    [Range(10, 500)] public float XDistance = 10;

    public Material StartupPlaneMaterial;

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

        Color baseColor = StartupPlaneMaterial.color; // Get the base color
        float H, S, V;
        Color.RGBToHSV(baseColor, out H, out S, out V); // Convert the color to HSV
        H = (H + 50/360f) % 1; // Shift the hue by 50 (out of 360), and wrap around if it exceeds 1
        StartupPlaneMaterial.color = Color.HSVToRGB(H, S, V); // Convert back to RGB and assign to the material

        // Do the same for emission
        Color emissionColor = StartupPlaneMaterial.GetColor("_EmissionColor"); // Get the emission color
        Color.RGBToHSV(emissionColor, out H, out S, out V); // Convert the color to HSV
        H = (H + 50/360f) % 1; // Shift the hue by 50 (out of 360), and wrap around if it exceeds 1
        StartupPlaneMaterial.SetColor("_EmissionColor", Color.HSVToRGB(H, S, V)); // Convert back to RGB and assign to the emission color
        
        


        SpawnStart();
    }

    void Awake()
    {
        if (Singleton == null) Singleton = this;

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
   
   public void Spawn(bool Dir){
    var HexagonPlane = Instantiate(Hexagon);
    HexagonPlane.transform.position = TurnPositions[HexagonIndex];
    HexagonIndex++;
    HexagonPlane.transform.rotation = Dir?HexagonPlane.transform.rotation*Quaternion.Euler(0,70,0):HexagonPlane.transform.rotation*Quaternion.Euler(0,-70,0);
    AllPlanes.Add(HexagonPlane);
   }
}