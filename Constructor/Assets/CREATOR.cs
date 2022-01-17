using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CREATOR : MonoBehaviour
{
    public void createPlaneObjects(GameObject gO, int i)
    {
        gO.transform.localPosition = State.currObjectsPosition[i];
        gO.transform.localScale = State.currObjectsScale[i];
        gO.transform.localRotation = State.currObjectsRotation[i];
        gO.AddComponent<MeshCollider>();
        if (i == 0)
        {
            gO.GetComponent<Renderer>().material = State.start;
            State.currObjectsMaterial[i] = "undefined";
            return;
        }        
        if (i == State.currGameObjects.Count - 1)
        {
            gO.GetComponent<Renderer>().material = State.finish;
            State.currObjectsMaterial[i] = "undefined";
            return;
        }
        switch (State.currObjectsMaterial[i])
        {
            case "minus":
                gO.GetComponent<Renderer>().material = State.minus;
                break;
            case "plus":
                gO.GetComponent<Renderer>().material = State.plus;
                break;
            case "step":
                gO.GetComponent<Renderer>().material = State.step;
                break;
            case "stop":
                gO.GetComponent<Renderer>().material = State.stop;
                break;
            case "left":
                gO.GetComponent<Renderer>().material = State.left;
                break;
            case "right":
                gO.GetComponent<Renderer>().material = State.rigth;
                break;
            case "shield":
                gO.GetComponent<Renderer>().material = State.shield;
                break;
            case "reverse":
                gO.GetComponent<Renderer>().material = State.reverse;
                break;
            default:
                gO.GetComponent<Renderer>().material = State.commonMaterial;
                break;
        }
        

    }
    public void createOtherObjects(GameObject gO, int i)
    {
        gO.GetComponent<Renderer>().material = State.parkMaterial;        

        gO.transform.localPosition = State.currOtherObjectsPosition[i];
        gO.transform.localScale = State.currOtherObjectsScale[i];
        gO.transform.localRotation = State.currOtherObjectsRotation[i];
        
        
    }
}
