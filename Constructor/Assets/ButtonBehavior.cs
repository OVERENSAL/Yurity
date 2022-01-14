using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonBehavior : MonoBehaviour
{
    public Material material;

    public void onClick()
    {
        State.highlighted.GetComponent<Renderer>().material = material;
        State.highlighted = null;
    }
}
