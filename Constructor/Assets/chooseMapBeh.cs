using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class chooseMapBeh : MonoBehaviour
{
    public Button button;
    bool blink = false;
    Color color = Color.white;
    // Start is called before the first frame update
    public void onClick()
    {
        State.map = button.name;
    }

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (button.name == State.map)
        {
            if (!blink)
            {
                color = color * 0.98f;
                button.GetComponent<Image>().color = color;
                if (button.GetComponent<Image>().color.a <= 0.7)
                {
                    blink = true;
                }
            }
            else
            {
                color = color / 0.98f;
                button.GetComponent<Image>().color = color;
                if (button.GetComponent<Image>().color.a >= 1)
                {
                    blink = false;
                }
            }
        } else
        {
            button.GetComponent<Image>().color = Color.white;
        }
    }
}
