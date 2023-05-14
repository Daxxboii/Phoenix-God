using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudSpawner : MonoBehaviour
{
    public List<GameObject> list = new List<GameObject>();

    int indexer = 0;
    private void Awake()
    {
        Player.PlanesHaveChanged += Spawn;
        MenuManager.GameOverTrigger += Reset;
    }

    void Spawn()
    {
        indexer++;
        if (indexer % 3 == 0)
        {
            var item = Instantiate(AlternateWorldGenerator.Singleton.Clouds, transform.position, Quaternion.identity);
            list.Add(item);
            if (list.Count > 20)
            {
                Destroy(list[0]);
                list.RemoveAt(0);
            }
        }
    }

    private void Reset()
    {
        Debug.Log("resetting");
        foreach (GameObject item in list)
        {
            Destroy(item);
        }
        list = new List<GameObject>();
        indexer = 0;
    }
}
