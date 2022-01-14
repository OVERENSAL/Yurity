using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class constructorBtnScript : MonoBehaviour
{
    public GameObject constructor;
    public GameObject startView;
    public GameObject routeView;
    public void onClick()
    {
        State.status = ConstructionStatus.routing;
        constructor.SetActive(true);
        startView.SetActive(false);
        routeView.SetActive(true);
        for (int i = 0; i < 196; i++)
        {
            GameObject go = GameObject.Find("Flowers (" + i + ")");
            go.AddComponent<BoxCollider>();
            go.GetComponent<MeshCollider>().enabled = false;
            go.AddComponent<Rigidbody>();
            go.GetComponent<Rigidbody>().isKinematic = true;
            go.AddComponent<collision>();
        }
    }
}
