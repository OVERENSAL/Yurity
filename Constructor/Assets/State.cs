using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class State
{
    public static bool movable = true;
    public static string map;
    public static Material material;
    public static Dictionary<Renderer, Material> selectedMaterial = new Dictionary<Renderer, Material>();
    public static List<GameObject> gameObjects = new List<GameObject>();
}
