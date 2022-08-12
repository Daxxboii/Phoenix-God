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

    public static bool RandomTrueOrFalse(this bool variable)
    {
        if (Random.Range(0, 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

 public class MinMaxSliderAttribute : PropertyAttribute{

        public float min;
        public float max;

        public MinMaxSliderAttribute(float min, float max)
        {
            this.min = min;
            this.max = max;
        }
    }  
