using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class constructorBtnScript : MonoBehaviour
{
    public GameObject startView;
    public GameObject routeView;
    public void onClick()
    {
        State.status = ConstructionStatus.routing;
        startView.SetActive(false);
        routeView.SetActive(true);
    }
}
