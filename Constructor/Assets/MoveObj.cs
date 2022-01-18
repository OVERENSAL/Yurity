using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MoveObj : MonoBehaviour
{
    private Ray ray;
    private RaycastHit hit;
    public Material material;
    //public GameObject plane;
    string buttonName;
    bool isActivePlane = false;
    bool blink = false;
    Renderer activePlane;
    Color color = Color.white;

    void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            State.obj = this.gameObject;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                buttonName = hit.transform.name;
                //для сброса материала при переключении
                if (activePlane != null)
                {
                    /*if (!State.selectedMaterial.ContainsKey(activePlane))
                    {
                        activePlane.material = material;
                    }
                    else
                    {
                        activePlane.material = State.selectedMaterial[activePlane];
                    }*/
                }
                if (buttonName == "Flowers(Clone)")
                {
                    isActivePlane = true;
                }
                else
                {
                    isActivePlane = false;
                    blink = false;
                }
            }
            
        }
        if (Input.GetMouseButton(0) && State.status == ConstructionStatus.decoration)
        {
            if (State.movable)
            {
                ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out hit) && hit.collider.gameObject == gameObject)
                {
                    transform.position = new Vector3(hit.point.x, transform.position.y, hit.point.z);
                }
            }
            else
            {
                ray = Camera.main.ScreenPointToRay(Input.mousePosition);
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
}
