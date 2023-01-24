using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlternateWorldGenerator : MonoBehaviour
{
    public GameObject

            PlaneR,
            PlaneL;

    [HideInInspector]
    public List<Vector3> TurnPositions = new List<Vector3>();

    [HideInInspector]
    public List<bool> AllDirections = new List<bool>();

    [Range(0, 50)]
    public int NumberOfPlanes;

    [Range(0, 50)]
    public float

            PlaneScaleX,
            PlaneScaleZ;

    Vector3 NextSpawn;

    public Vector3 Rotation;

    private GameObject Parent;

    bool LastDir = true;

    bool Dir;

    public static AlternateWorldGenerator Singleton;

    void Awake()
    {
        if (Singleton == null) Singleton = this;
        Parent = new GameObject("Parent");
        Spawn();
    }

    // Update is called once per frame
    void Spawn()
    {
        AllDirections.Add(false);
        AllDirections.Add(true);

        NextSpawn = new Vector3(0f, -4.6f, 0f);
        TurnPositions.Add (NextSpawn);
        var _PlaneL = Instantiate(PlaneL, NextSpawn, Quaternion.identity);
        _PlaneL.transform.eulerAngles = Rotation;
        _PlaneL.transform.localScale =
            new Vector3(_PlaneL.transform.localScale.x * PlaneScaleX,
                _PlaneL.transform.localScale.y * PlaneScaleZ,
                _PlaneL.transform.localScale.z * PlaneScaleZ);
        _PlaneL.transform.SetParent(Parent.transform);

        NextSpawn = new Vector3(-3f * PlaneScaleX, -4.6f, 3f * PlaneScaleZ);
        TurnPositions.Add (NextSpawn);

        var _PlaneR = Instantiate(PlaneR, NextSpawn, Quaternion.identity);
        _PlaneR.transform.eulerAngles = Rotation;
        _PlaneR.transform.localScale =
            new Vector3(_PlaneR.transform.localScale.x * PlaneScaleX,
                _PlaneR.transform.localScale.y * PlaneScaleZ,
                _PlaneR.transform.localScale.z * PlaneScaleZ);

        _PlaneR.transform.SetParent(Parent.transform);

        LastDir = true;

        for (int i = 0; i < NumberOfPlanes - 2; i++)
        {
            NextSpawn.z += 3 * PlaneScaleZ;
            Dir = LorR();

            if (LastDir == Dir)
            {
                if (LastDir == false)
                {
                    NextSpawn.x -= 3 * PlaneScaleX;
                }
                else
                {
                    NextSpawn.x += 3 * PlaneScaleX;
                }
            }
            else
            {
                if (LastDir == true)
                {
                    NextSpawn.x += 3 * PlaneScaleX;
                }
                else
                {
                    NextSpawn.x -= 3 * PlaneScaleX;
                }
            }

            //Spawning
            if (Dir)
            {
                var plane = Instantiate(PlaneR, NextSpawn, Quaternion.identity);
                plane.transform.eulerAngles = Rotation;
                plane.transform.localScale =
                    new Vector3(plane.transform.localScale.x * PlaneScaleX,
                        plane.transform.localScale.y * PlaneScaleZ,
                        plane.transform.localScale.z * PlaneScaleZ);
                plane.transform.SetParent(Parent.transform);
            }
            else
            {
                var plane = Instantiate(PlaneL, NextSpawn, Quaternion.identity);
                plane.transform.eulerAngles = Rotation;
                plane.transform.localScale =
                    new Vector3(plane.transform.localScale.x * PlaneScaleX,
                        plane.transform.localScale.y * PlaneScaleZ,
                        plane.transform.localScale.z * PlaneScaleZ);
                plane.transform.SetParent(Parent.transform);
            }

            TurnPositions.Add (NextSpawn);
            AllDirections.Add (Dir);
            LastDir = Dir;
        }
    }

    public void SpawnMorePlanes()
    {
        NextSpawn.z += 3 * PlaneScaleZ;
        Dir = LorR();

        if (LastDir == Dir)
        {
            if (LastDir == false)
            {
                NextSpawn.x -= 3 * PlaneScaleX;
            }
            else
            {
                NextSpawn.x += 3 * PlaneScaleX;
            }
        }
        else
        {
            if (LastDir == true)
            {
                NextSpawn.x += 3 * PlaneScaleX;
            }
            else
            {
                NextSpawn.x -= 3 * PlaneScaleX;
            }
        }

        //Spawning
        if (Dir)
        {
            var plane = Instantiate(PlaneR, NextSpawn, Quaternion.identity);
            plane.transform.eulerAngles = Rotation;
            plane.transform.localScale =
                new Vector3(plane.transform.localScale.x * PlaneScaleX,
                    plane.transform.localScale.y * PlaneScaleZ,
                    plane.transform.localScale.z * PlaneScaleZ);
            plane.transform.SetParent(Parent.transform);
        }
        else
        {
            var plane = Instantiate(PlaneL, NextSpawn, Quaternion.identity);
            plane.transform.eulerAngles = Rotation;
            plane.transform.localScale =
                new Vector3(plane.transform.localScale.x * PlaneScaleX,
                    plane.transform.localScale.y * PlaneScaleZ,
                    plane.transform.localScale.z * PlaneScaleZ);
            plane.transform.SetParent(Parent.transform);
        }

        TurnPositions.Add (NextSpawn);
        AllDirections.Add (Dir);
        LastDir = Dir;
    }

    bool LorR()
    {
        var randomNumber = Random.Range(0f, 2f); //Generates number between 1 & 2
        bool Decide = false;
        if (randomNumber > 1)
            Decide = true;
        else
            Decide = false;

        //Debug.Log(randomNumber);
        if (
            (
            AllDirections[AllDirections.Count - 1] ==
            AllDirections[AllDirections.Count - 2]
            ) &&
            (AllDirections[AllDirections.Count - 2] == Decide) &&
            (AllDirections[AllDirections.Count - 3] == Decide)
        )
        {
            return LorR();
        }
        else
        {
            return Decide;
        }
    }

    public void ResetWorld()
    {
        foreach (Transform t in Parent.transform)
        {
            Destroy(t.gameObject);
        }
        AllDirections.Clear();
        TurnPositions.Clear();
        NextSpawn = Vector3.zero;
        LastDir = false;
        Awake();
    }
}
