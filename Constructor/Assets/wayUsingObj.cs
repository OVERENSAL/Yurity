using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wayUsingObj : MonoBehaviour
{
    public GameObject gameObject;
    public bool isMovable;
    public void onClick()
    {
        this.GetComponent<Image>().color = Color.white;
        State.movable = isMovable;
        gameObject.GetComponent<Image>().color = Color.gray;
    }
}
