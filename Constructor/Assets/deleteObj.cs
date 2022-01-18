using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class deleteObj : MonoBehaviour
{
    public void onClick()
    {
        Destroy(State.obj);
        State.obj = null;
    }
}
