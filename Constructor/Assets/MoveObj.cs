using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MoveObj : MonoBehaviour
{
    private Ray ray;
    private RaycastHit hit;
    private Camera camera;
    public Material material;
    //public GameObject plane;
    string buttonName;
    bool isActivePlane = false;
    bool blink = false;
    Renderer activePlane;
    Color color = Color.white;
    //private TaleManager taleManager;

    //public string ModelFilename;

    /*ActionType actionType;
    Vector2 mousePos;
    DateTime actionTime;*/

    void Start()
    {
        camera = GameObject.Find("AR Camera").GetComponent<Camera>();
        //taleManager = GameObject.Find("ARCamera").GetComponent<TaleManager>();
    }

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
                    if (!State.selectedMaterial.ContainsKey(activePlane))
                    {
                        activePlane.material = material;
                    }
                    else
                    {
                        activePlane.material = State.selectedMaterial[activePlane];
                    }
                }
                if (buttonName == "Flowers(Clone)")
                {
                    choosePlane(hit);
                    isActivePlane = true;
                }
                else
                {
                    isActivePlane = false;
                    blink = false;
                }
            }
            
        }
        if (Input.GetMouseButton(0))
        {
            if (State.movable)
            {
                ray = camera.ScreenPointToRay(Input.mousePosition);
                print('d');
                if (Physics.Raycast(ray, out hit) && hit.collider.gameObject == gameObject)
                {
                    transform.position = new Vector3(hit.point.x, transform.position.y, hit.point.z);
                }
            }
            else
            {
                ray = camera.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out hit) && hit.collider.gameObject == gameObject)
                {
                    transform.rotation = Quaternion.Euler(
                    transform.eulerAngles.x,
                    transform.eulerAngles.y - Input.GetAxis("Mouse X") * 10,
                    transform.eulerAngles.z
                    );
                }

            }
        }
    }

    void OnMouseDown()
    {
        if (EventSystem.current.IsPointerOverGameObject())
        {
            return;
        }

        /*if (GetMenuManager().CurrentMoveObj == null)
        {
            GetMenuManager().CurrentMoveObj = gameObject;
        }*/
    }

    void OnMouseUp()
    {
        if (EventSystem.current.IsPointerOverGameObject())
        {
            return;
        }

        //GetMenuManager().CurrentMoveObj = null;
    }

    void setMaterial()
    {
        if (isActivePlane && State.material != null)
        {
            activePlane.material = State.material;
            if (State.selectedMaterial.ContainsKey(activePlane))
            {
                State.selectedMaterial[activePlane] = State.material;
            }
            else
            {
                State.selectedMaterial.Add(activePlane, State.material);
            }
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
            }
            else
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
