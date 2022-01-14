using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class nextBtnFeature : MonoBehaviour
{
    public GameObject cellFeatureView;
    public GameObject decorationView;

    public void onClick()
    {
        State.status = ConstructionStatus.decoration;
        cellFeatureView.SetActive(false);
        decorationView.SetActive(true);
    }
}
