using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class planeScript : MonoBehaviour
{
    private float high = 0.54f;
    private float low = 0.52f;
    private bool change = true;
    MeshFilter filter;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
    }

    void OnMouseUp()
    {
        if (EventSystem.current.IsPointerOverGameObject())
        {
            return;
        }
        if (State.status == ConstructionStatus.routing)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                filter = hit.collider.GetComponent(typeof(MeshFilter)) as MeshFilter;
            }
            if (filter)
            {
                if (!State.gameObjects["yasosubiby"].Contains(filter.gameObject))
                {
                    filter.gameObject.transform.localPosition = new Vector3(
                        filter.gameObject.transform.localPosition.x,
                        filter.gameObject.transform.localPosition.y,
                        filter.gameObject.transform.localPosition.z + 0.1f);
                    State.gameObjects["yasosubiby"].Add(filter.gameObject);
                }
                else
                {
                    filter.gameObject.transform.localPosition = new Vector3(
                        filter.gameObject.transform.localPosition.x,
                        filter.gameObject.transform.localPosition.y,
                        filter.gameObject.transform.localPosition.z - 0.1f);
                    State.gameObjects["yasosubiby"].Remove(filter.gameObject);
                }
            }
        }
    }
}
