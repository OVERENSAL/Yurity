using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseModeButton : MonoBehaviour
{
    public GameObject startLayout;
    public GameObject chooseMapLayout;
    public GameObject gameMapLayout;
    public GameObject constructorMapLayout;
    public GameObject gameCanvas;

    void Start()
    {
        startLayout.SetActive(true);
        chooseMapLayout.SetActive(false);
    }

    public void onClickConstructor()
    {
        SaveScriipt.read();
        startLayout.SetActive(false);
        chooseMapLayout.SetActive(true);
        constructorMapLayout.SetActive(true);
        gameMapLayout.SetActive(false);
    }

    public void onClickGame()
    {
        startLayout.SetActive(false);
        chooseMapLayout.SetActive(false);
        constructorMapLayout.SetActive(false);
        gameMapLayout.SetActive(true);
        gameCanvas.SetActive(true);
    }
}
