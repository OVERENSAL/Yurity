using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class State
{
    public static ConstructionStatus status = ConstructionStatus.init;
    public static bool movable = true;
    public static string map;
    public static Material material;
    public static Dictionary<Renderer, Material> selectedMaterial = new Dictionary<Renderer, Material>();
    public static Dictionary<string, List<GameObject>> gameObjects = new Dictionary<string, List<GameObject>>();
}

public enum ConstructionStatus
{
    init,
    routing,
    feature,
    decoration,
}
