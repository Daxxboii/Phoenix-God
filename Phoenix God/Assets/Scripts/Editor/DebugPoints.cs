using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Label))]
public class DebugPoints : Editor
{
    Label m_Target;

    private void OnSceneGUI()
    {
        m_Target = (Label)target;

        GUIStyle textstyle = new GUIStyle();
        textstyle.fontSize = 14;
        textstyle.normal.textColor = Color.red;
        textstyle.alignment = TextAnchor.MiddleCenter;

        MeshFilter Filter = m_Target.gameObject.GetComponent<MeshFilter>();

        List<Vector3> Vertices = new List<Vector3>();
        Vertices.Add(m_Target.transform.TransformPoint(Filter.mesh.vertices[0]));
        Vertices.Add(m_Target.transform.TransformPoint(Filter.mesh.vertices[1]));
        Vertices.Add(m_Target.transform.TransformPoint(Filter.mesh.vertices[2]));
        Vertices.Add(m_Target.transform.TransformPoint(Filter.mesh.vertices[3]));



        Handles.Label(Vertices[0], Vertices[0].ToString(), textstyle);
        Handles.Label(Vertices[1], Vertices[1].ToString(), textstyle);
        Handles.Label(Vertices[2], Vertices[2].ToString(), textstyle);
        Handles.Label(Vertices[3], Vertices[3].ToString(), textstyle);
    }
}
