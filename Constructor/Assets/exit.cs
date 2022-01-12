using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class exit : MonoBehaviour
{
    public GameObject startView;
    public GameObject currentView;
    public GameObject plane;
    public void onClick()
    {
        startView.SetActive(true);
        currentView.SetActive(false);
        for (int i = 0; i < plane.transform.childCount; i++)
        {
            if (plane.transform.GetChild(i).name != "grid")
            {
                Destroy(plane.transform.GetChild(i).gameObject);
            }
        }
        if (State.status == ConstructionStatus.routing)
        {
            for (int i = 0; i < 196; i++)
            {
                GameObject go = GameObject.Find("Flowers (" + i + ")");
                if (State.gameObjects["yasosubiby"].Contains(go))
                {
                    go.transform.localPosition = new Vector3(
                        go.transform.localPosition.x,
                        go.transform.localPosition.y,
                        go.transform.localPosition.z - 0.1f);
                }
            }
        } else
        {
            for (int i = 0; i < 196; i++)
            {
                GameObject go = GameObject.Find("Flowers (" + i + ")");
                if (!State.gameObjects["yasosubiby"].Contains(go))
                {
                    go.transform.localPosition = new Vector3(
                        go.transform.localPosition.x,
                        go.transform.localPosition.y,
                        go.transform.localPosition.z + 0.2f);
                }
                else
                {
                    go.transform.localPosition = new Vector3(
                        go.transform.localPosition.x,
                        go.transform.localPosition.y,
                        go.transform.localPosition.z - 0.1f);
                }
            }
        }
        State.gameObjects["yasosubiby"].Clear();
        State.status = ConstructionStatus.init;
    }
}
