using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class initScript : MonoBehaviour
{
    public GameObject constructor;
    public GameObject game;

    public GameObject routingView;
    public GameObject CellsFeatureView;
    public GameObject DecorationView;
    public GameObject NoGamesView;
    public GameObject ChooseMapView;
    public GameObject SaveView;
    public GameObject SuccessSaveView;

    public Material commonMaterial;
    public Material highLightMaterial;
    public Material errorMaterial;
    public Material parkMaterial;

    void Start()
    {
        State.gameObjects = new List<GameObject>();
        State.otherObjects = new List<GameObject>();

        State.commonMaterial = commonMaterial;
        State.highLightMaterial = highLightMaterial;
        State.errorMaterial = errorMaterial;
        State.parkMaterial = parkMaterial;

        routingView.SetActive(false);
        CellsFeatureView.SetActive(false);
        DecorationView.SetActive(false);
        NoGamesView.SetActive(false);
        ChooseMapView.SetActive(false);
        SaveView.SetActive(false);
        SuccessSaveView.SetActive(false);

        constructor.SetActive(false);
        game.SetActive(false);
    }
}
