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

    public Mesh benchMesh;
    public Mesh bushMesh;
    public Mesh lampMesh;
    public Mesh tree1Mesh;
    public Mesh tree2Mesh;
    public Mesh fountainMesh;
    public Mesh hovelMesh;
    public Mesh planeMesh;

    public Material plus;
    public Material minus;
    public Material step;
    public Material stop;
    public Material left;
    public Material rigth;
    public Material shield;
    public Material reverse;

    void Start()
    {
        State.plus = plus;
        State.minus = minus;
        State.step = step;
        State.stop = stop;
        State.left = left;
        State.rigth = rigth;
        State.shield = shield;
        State.reverse = reverse;

        State.benchMesh = benchMesh;
        State.bushMesh = bushMesh;
        State.lampMesh = lampMesh;
        State.tree1Mesh = tree1Mesh;
        State.tree2Mesh = tree2Mesh;
        State.hovelMesh = hovelMesh;
        State.fountainMesh = fountainMesh;
        State.planeMesh = planeMesh;

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
