using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.Extensions;

public class PosTest : MonoBehaviour
{
    public UILineRenderer line;

    void Update()
    {
        if (line.Points.Length > 0)
        {
            Vector2 localPos = line.Points[0];
            Vector3 globalPos = GetGlobalPosition(this.transform.parent.GetComponent<Canvas>(), localPos);

            transform.position = localPos;


            RectTransform rectTransform = GetComponent<RectTransform>();
            //rectTransform.anchoredPosition = globalPos;
        }
    }
    Vector3 GetGlobalPosition(Canvas canvas, Vector2 localPos)
    {
        return Camera.main.ScreenToWorldPoint(localPos);
    }

}
