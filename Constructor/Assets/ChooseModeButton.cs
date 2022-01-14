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

    public GameObject gameMap;
    public GameObject plane;
    public GameObject gameView;

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
        State.data = SaveScriipt.read();        
        if (State.data == null)
        {
            nogames.SetActive(true);
            return;
        }
        if (State.data.Count == 0)
        {
            nogames.SetActive(true);
            return;
        }
        if (State.data.Count != 0)
        {
            //gameMapLayout.SetActive(true);
            //gameCanvas.SetActive(true);
            //���������� ����� ������ �����
            for(int i = 0; i < State.data.Count; i++)
            {
                GameObject button = (GameObject)Instantiate(buttonPrefab);

                button.transform.position = gridLayout.transform.position;
                button.GetComponent<RectTransform>().SetParent(gridLayout.transform);
                button.GetComponent<RectTransform>().SetInsetAndSizeFromParentEdge(RectTransform.Edge.Left, 0, 10);
                button.layer = 5;
                button.GetComponentInChildren<Text>().text = State.data[i].mapName;

                Button b = button.GetComponent<Button>();
                b.onClick.AddListener(delegate () { onClick(button); });
            }
            
            chooseMapLayout.SetActive(true);
        }
    }

    public void onClick(GameObject button)
    {
        State.currMapName = button.GetComponentInChildren<Text>().text;
        for (int i = 0; i < State.data.Count; i++)
        {
            if (State.data[i].mapName == State.currMapName)
            {
                State.currGameObjects = State.data[i].gameObjects;
                State.currOtherObjects = State.data[i].otherObjects;
            }
        }
        gameView.SetActive(false);
        gameMap.SetActive(true);

        //instantiate
        for (int i = 0; i < State.currGameObjects.Count; i++)
        {
            GameObject gO = Instantiate(State.currGameObjects[i]) as GameObject;
            gO.transform.SetParent(plane.transform);
        }
        for (int i = 0; i < State.currOtherObjects.Count; i++)
        {
            GameObject gO = Instantiate(State.currOtherObjects[i]) as GameObject;
            gO.transform.SetParent(plane.transform);
            gO.AddComponent<Renderer>().material = State.parkMaterial;
        }

    }
}
