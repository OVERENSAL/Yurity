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
    public static List<GameObject> currGameObjects = new List<GameObject>();
    public static List<GameObject> currOtherObjects = new List<GameObject>();

    public static List<SaveData> data = new List<SaveData>();
}

public enum ConstructionStatus
{
    init,
    routing,
    feature,
    decoration,
}
