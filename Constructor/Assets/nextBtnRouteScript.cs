using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class nextBtnRouteScript : MonoBehaviour
{
    public GameObject routeView;
    public GameObject cellFeatureView;

    public void onClick()
    {
        State.status = ConstructionStatus.feature;
        routeView.SetActive(false);
        cellFeatureView.SetActive(true);
        for(int i = 0; i < 196; i++)
        {
            GameObject go = GameObject.Find("Flowers (" + i + ")");
            if (!State.gameObjects.Contains(go)) 
            {
                go.transform.localPosition = new Vector3(
                    go.transform.localPosition.x,
                    go.transform.localPosition.y,
                    go.transform.localPosition.z - 0.2f);
            }
        }
    }
}
