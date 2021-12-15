using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class State
{
    public static Material material;
    public static Dictionary<Renderer, Material> selectedMaterial = new Dictionary<Renderer, Material>();
}
