using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AcceptButtonBeh : MonoBehaviour
{
    public GameObject currentLayout;
    public GameObject constructorLayout;

    public void onClick()
    {
        currentLayout.gameObject.SetActive(false);
        constructorLayout.gameObject.SetActive(true);
    }

}
