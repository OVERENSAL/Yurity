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
        if (Input.GetMouseButton(0))
        {
            if (State.movable)
            {
                ray = camera.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out hit) && hit.collider.gameObject == gameObject)
                {
                    transform.position = new Vector3(hit.point.x, transform.position.y, hit.point.z);
                }
            } else
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
            
            
            /*if (taleManager.actionType == ActionType.Move)
            {
                
            } 
            else if (taleManager.actionType == ActionType.Rotate)
            {
                transform.eulerAngles = new Vector3(
                    transform.eulerAngles.x,
                    transform.eulerAngles.y - Input.GetAxis("Mouse X") * 10,
                    transform.eulerAngles.z
                );
            }
            else if (taleManager.actionType == ActionType.Height)
            {
                ray = camera.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out hit) && hit.collider.gameObject == gameObject)
                {
                    transform.position = new Vector3(transform.position.x, hit.point.y, transform.position.z);
                }
            }*/
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

    /*MenuManager GetMenuManager()
    {
        return camera.gameObject.GetComponent<MenuManager>();
    }*/
}