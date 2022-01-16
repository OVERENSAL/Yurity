using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CREATOR : MonoBehaviour
{
    public void createPlaneObjects(GameObject gO, int i)
    {
        gO.AddComponent<MeshFilter>().mesh = State.planeMesh;
        gO.transform.localPosition = State.currObjectsPosition[i];
        gO.transform.localScale = State.currObjectsScale[i];
        gO.transform.localRotation = State.currObjectsRotation[i];
        gO.AddComponent<MeshCollider>();
        if (i == 0)
        {
            gO.AddComponent<MeshRenderer>().material = State.start;
            State.currObjectsMaterial[i] = "undefined";
            return;
        }        
        if (i == State.currGameObjects.Count - 1)
        {
            gO.AddComponent<MeshRenderer>().material = State.finish;
            State.currObjectsMaterial[i] = "undefined";
            return;
        }
        switch (State.currObjectsMaterial[i])
        {
            case "minus":
                gO.AddComponent<MeshRenderer>().material = State.minus;
                break;
            case "plus":
                gO.AddComponent<MeshRenderer>().material = State.plus;
                break;
            case "step":
                gO.AddComponent<MeshRenderer>().material = State.step;
                break;
            case "stop":
                gO.AddComponent<MeshRenderer>().material = State.stop;
                break;
            case "left":
                gO.AddComponent<MeshRenderer>().material = State.left;
                break;
            case "right":
                gO.AddComponent<MeshRenderer>().material = State.rigth;
                break;
            case "shield":
                gO.AddComponent<MeshRenderer>().material = State.shield;
                break;
            case "reverse":
                gO.AddComponent<MeshRenderer>().material = State.reverse;
                break;
            default:
                gO.AddComponent<MeshRenderer>().material = State.commonMaterial;
                break;
        }
        

    }
    public void createOtherObjects(GameObject gO, int i)
    {
        switch (gO.name.Split('(')[0])
        {
            case "Bench":
                gO.AddComponent<MeshFilter>().mesh = State.benchMesh;
                break;
            case "Bush":
                gO.AddComponent<MeshFilter>().mesh = State.bushMesh;
                break;
            case "Fountain_1":
                gO.AddComponent<MeshFilter>().mesh = State.fountainMesh;
                break;
            case "Hovel_Green":
                gO.AddComponent<MeshFilter>().mesh = State.hovelMesh;
                break;
            case "Lamp":
                gO.AddComponent<MeshFilter>().mesh = State.lampMesh;
                break;
            case "Tree_1":
                gO.AddComponent<MeshFilter>().mesh = State.tree1Mesh;
                break;
            case "Tree_5":
                gO.AddComponent<MeshFilter>().mesh = State.tree2Mesh;
                break;
        }
        gO.AddComponent<MeshRenderer>().material = State.parkMaterial;
        gO.AddComponent<MeshCollider>();

        gO.transform.localPosition = State.currOtherObjectsPosition[i];
        gO.transform.localScale = State.currOtherObjectsScale[i];
        gO.transform.localRotation = State.currOtherObjectsRotation[i];
        
        
    }
}
