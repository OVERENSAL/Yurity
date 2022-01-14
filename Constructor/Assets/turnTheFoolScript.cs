using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turnTheFoolScript : MonoBehaviour
{
    public void onClick()
    {
        if (State.highlighted != null)
        {
            State.highlighted.transform.Rotate(0, 0, 90);
        }
    }
}
