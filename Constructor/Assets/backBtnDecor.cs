using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class backBtnDecor : MonoBehaviour
{
    public GameObject featureView;
    public GameObject decorationView;
    public GameObject plane;

    public void onClick()
    {
        featureView.SetActive(true);
        decorationView.SetActive(false);
        State.status = ConstructionStatus.feature;
        for (int i = 0; i < plane.transform.childCount; i++)
        {
            if (plane.transform.GetChild(i).name != "grid")
            {
                Destroy(plane.transform.GetChild(i).gameObject);
            }
        }
    }
}
