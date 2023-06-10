using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EmissionTester : MonoBehaviour
{
    public Color startcolor,endcolor;
    [Range(0f,1f)]public float emission;

    public new MeshRenderer renderer;

    Material m;

    void Start(){
        m = renderer.material;
    }

    // Update is called once per frame
    void Update()
    {
        m.SetColor("_EmissionColor",Color.Lerp(endcolor,startcolor,emission));
    }
}
