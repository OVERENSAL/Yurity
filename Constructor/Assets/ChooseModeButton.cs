using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChooseModeButton : MonoBehaviour
{
    public GameObject startLayout;
    public GameObject chooseMapLayout;
    public GameObject gameMapLayout;
    public GameObject constructorMapLayout;
    public GameObject gameCanvas;
    public GameObject constructor;

    public GameObject gridLayout;
    public GameObject nogames;
    public GameObject buttonPrefab;

    void Start()
    {
        startLayout.SetActive(true);
        chooseMapLayout.SetActive(false);
    }

    public void onClickConstructor()
    {
        startLayout.SetActive(false);
        chooseMapLayout.SetActive(false);
        constructorMapLayout.SetActive(true);
        gameMapLayout.SetActive(false);
        constructor.SetActive(true);
    }

    public void onClickGame()
    {
        startLayout.SetActive(false);
        chooseMapLayout.SetActive(false);
        constructorMapLayout.SetActive(false);
        State.gameObjects = SaveScriipt.read();
        print(State.gameObjects.Count);

        if (State.gameObjects.Count != 0)
        {
            //gameMapLayout.SetActive(true);
            //gameCanvas.SetActive(true);
            //отображать после выбора карты
            for(int i = 0; i < State.gameObjects.Count; i++)
            {
                GameObject button = (GameObject)Instantiate(buttonPrefab);

                button.transform.position = gridLayout.transform.position;
                button.GetComponent<RectTransform>().SetParent(gridLayout.transform);
                button.GetComponent<RectTransform>().SetInsetAndSizeFromParentEdge(RectTransform.Edge.Left, 0, 10);
                button.layer = 5;
                button.GetComponentInChildren<Text>().text = "" + (i + 1);
            }
            chooseMapLayout.SetActive(true);
        } else
        {
            nogames.SetActive(true);
        }
        
        
    }
}
