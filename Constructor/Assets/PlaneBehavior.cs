using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlaneBehavior : MonoBehaviour
{
    public Material material;
    //public GameObject plane;
    string buttonName;
    bool isActivePlane = false;
    bool blink = false;
    Renderer activePlane;
    Color color = Color.white;
    List<string> planeList = new List<string>();
    
    
    // Start is called before the first frame update
    void Start()
    {
        planeList.Add("plane1");
        planeList.Add("plane2");
        planeList.Add("plane3");
        planeList.Add("plane4");
        planeList.Add("plane5");
        planeList.Add("plane6");
        planeList.Add("plane7");
        planeList.Add("plane8");
        planeList.Add("plane9");
        planeList.Add("plane10");
        planeList.Add("plane11");
        planeList.Add("plane12");
        planeList.Add("plane13");
        planeList.Add("plane14");
        planeList.Add("plane15");
        planeList.Add("plane16");
        planeList.Add("plane17");
        planeList.Add("plane18");
        planeList.Add("plane19");
        planeList.Add("plane20");
        planeList.Add("plane21");
        planeList.Add("plane22");
        planeList.Add("plane23");
        planeList.Add("plane24");
        planeList.Add("plane25");
        planeList.Add("plane26");
        planeList.Add("plane27");
        planeList.Add("plane28");
        planeList.Add("plane29");
        planeList.Add("plane30");
        planeList.Add("plane31");
        planeList.Add("plane32");
        planeList.Add("plane33");
        planeList.Add("plane34");
        planeList.Add("plane35");
        planeList.Add("plane36");
        planeList.Add("plane37");
        planeList.Add("plane38");
        planeList.Add("plane39");
        planeList.Add("plane40");
        planeList.Add("plane41");
        planeList.Add("plane42");
        planeList.Add("plane43");
        planeList.Add("plane44");
        planeList.Add("plane45");
    }

    // Update is called once per frame
    void Update()
    {
        setMaterial();
        changeOpacity();

        if (Input.GetMouseButtonUp(0))
        {            
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                buttonName = hit.transform.name;
                //для сброса материала при переключении
                if (activePlane != null)
                {
                   
                }
                if (planeList.Contains(buttonName)) {
                    choosePlane(hit);
                    isActivePlane = true;
                } else
                {
                    isActivePlane = false;
                    blink = false;
                }
            }
        } 
    }

    void setMaterial()
    {
        if (isActivePlane && State.material != null)
        {
            activePlane.material = State.material;
           
            State.material = null;
        }
    }

    void choosePlane(RaycastHit hit)
    {
        var renderer = hit.transform.GetComponent<Renderer>();
        if (activePlane != renderer)
        {
            activePlane = renderer;
        }
    }

    void changeOpacity()
    {
        if (isActivePlane)
        {
            if (!blink)
            {
                color = color * 0.99f;
                activePlane.material.color = color;
                if (activePlane.material.color.a <= 0.5)
                {
                    blink = true;
                }
            } else
            {
                color = color / 0.99f;
                activePlane.material.color = color;
                if (activePlane.material.color.a >= 1)
                {
                    blink = false;
                }
            }
            
        }
    }
}
