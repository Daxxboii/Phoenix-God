using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Attributes 
{
    public static void Shuffle(this List<GameObject> List)
    {
        for (int i = 0; i < List.Count; i++)
        {
            GameObject temp = List[i];
            int randomIndex = Random.Range(i, List.Count);
            List[i] = List[randomIndex];
            List[randomIndex] = temp;
        }
    }
}
