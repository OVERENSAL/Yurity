using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class initScript : MonoBehaviour
{
    public GameObject routingView;
    public GameObject CellsFeatureView;
    public GameObject DecorationView;
    public GameObject NoGamesView;
    public GameObject ChooseMapView;
    public GameObject SuccessSaveView;

    void Start()
    {
        State.gameObjects = new Dictionary<string, List<GameObject>>() { { "yasosubiby", new List<GameObject>() } };

        routingView.SetActive(false);
        CellsFeatureView.SetActive(false);
        DecorationView.SetActive(false);
        NoGamesView.SetActive(false);
        ChooseMapView.SetActive(false);
        //SuccessSaveView.SetActive(false);
    }
}
