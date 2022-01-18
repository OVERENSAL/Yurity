using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class State
{
    public static ConstructionStatus status = ConstructionStatus.init;
    public static bool movable = true;
    public static string map;
    public static Material commonMaterial;
    public static Material highLightMaterial;
    public static Material errorMaterial;
    public static Material parkMaterial;
    public static GameObject highlighted;

    //не нужно
    public static Material material;

    public static string mapName;
    public static List<GameObject> gameObjects = new List<GameObject>();
    public static List<GameObject> otherObjects = new List<GameObject>();
    

    public static string currMapName;
    public static List<string> currGameObjects = new List<string>();
    public static List<string> currOtherObjects = new List<string>();
    public static List<string> currObjectsMaterial = new List<string>();
    public static List<Vector3> currObjectsPosition = new List<Vector3>();
    public static List<Vector3> currObjectsScale = new List<Vector3>();
    public static List<Quaternion> currObjectsRotation = new List<Quaternion>();

    public static List<Vector3> currOtherObjectsPosition = new List<Vector3>();
    public static List<Vector3> currOtherObjectsScale = new List<Vector3>();
    public static List<Quaternion> currOtherObjectsRotation = new List<Quaternion>();

    public static List<SaveData> data = new List<SaveData>();

    public static Mesh benchMesh;
    public static Mesh bushMesh;
    public static Mesh lampMesh;
    public static Mesh fountainMesh;
    public static Mesh hovelMesh;
    public static Mesh tree1Mesh;
    public static Mesh tree2Mesh;
    public static Mesh planeMesh;

    public static Material plus;
    public static Material minus;
    public static Material step;
    public static Material stop;
    public static Material left;
    public static Material rigth;
    public static Material shield;
    public static Material reverse;
    public static Material start;
    public static Material finish;
    public static GameObject ChooseView;
    public static GameObject GameView;

    public static GameObject endGameButton;
    public static GameObject EndView;

    public static GameObject cell;

    public static GameObject bench;
    public static GameObject lamp;
    public static GameObject hovel;
    public static GameObject tree1;
    public static GameObject tree2;
    public static GameObject bush;
    public static GameObject fountain;

    public static AudioClip cellTap;
    public static AudioClip objCreate;

    public static GameObject obj;
}

public enum ConstructionStatus
{
    init,
    routing,
    feature,
    decoration,
}
