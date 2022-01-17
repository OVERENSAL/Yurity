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

    public GameObject ChooseView;
    public GameObject GameView;

    public GameObject EndView;

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
    public Material start;
    public Material finish;

    public GameObject endGameButtton;

    public GameObject cell;

    public GameObject bench;
    public GameObject lamp;
    public GameObject hovel;
    public GameObject tree1;
    public GameObject tree2;
    public GameObject bush;
    public GameObject fountain;

void Start()
    {
        State.bench = bench;
        State.lamp = lamp;
        State.hovel = hovel;
        State.tree1 = tree1;
        State.tree2 = tree2;
        State.bush = bush;
        State.fountain = fountain;

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
        ChooseView.SetActive(false);
        GameView.SetActive(false);
        State.ChooseView = ChooseView;
        State.GameView = GameView;
        EndView.SetActive(false);

        State.endGameButton = endGameButtton;
        State.EndView = EndView;

        State.start = start;
        State.finish = finish;

        State.cell = cell;
    }
}
