using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class chooseMapBeh : MonoBehaviour
{
    public Button button;
    bool blink = false;
    Color color = Color.white;
    public GameObject firstMap;
    public GameObject secondMap;
    public GameObject thirdMap;
    // Start is called before the first frame update
    public void onClick()
    {
        State.map = button.name;
        switch (button.name)
        {
            case ("firstMap"):
                firstMap.SetActive(true);
                secondMap.SetActive(false);
                thirdMap.SetActive(false);
                break;
            case ("secondMap"):
                firstMap.SetActive(false);
                secondMap.SetActive(true);
                thirdMap.SetActive(false);
                break;
            case ("thirdMap"):
                firstMap.SetActive(false);
                secondMap.SetActive(false);
                thirdMap.SetActive(true);
                break;
            default:
                break;
        }
    }

    void Start()
    {
        firstMap.SetActive(false);
        secondMap.SetActive(false);
        thirdMap.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (button.name == State.map)
        {
            if (!blink)
            {
                color = color * 0.99f;
                button.GetComponent<Image>().color = color;
                if (button.GetComponent<Image>().color.a <= 0.5)
                {
                    blink = true;
                }
            }
            else
            {
                color = color / 0.99f;
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
