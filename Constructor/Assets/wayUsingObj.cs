using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class wayUsingObj : MonoBehaviour
{
    public Button button;
    public Sprite move;
    public Sprite spin;

    public void onClick()
    {
        if (State.movable)
        {
            State.movable = false;
            button.GetComponent<Image>().sprite = spin;
        } else
        {
            State.movable = true;
            button.GetComponent<Image>().sprite = move;
        }
    }

    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
