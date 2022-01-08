using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class goToConstructor : MonoBehaviour
{
    public GameObject gameMapLayout;
    public GameObject constructor
        ;
    public void onClick()
    {
        gameMapLayout.SetActive(false);
        constructor.SetActive(true);
    }
}
