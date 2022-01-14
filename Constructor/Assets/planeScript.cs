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
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            filter = hit.collider.GetComponent(typeof(MeshFilter)) as MeshFilter;
        }
        if (filter)
        {
            if (State.status == ConstructionStatus.routing){
            
                if (!State.gameObjects.Contains(filter.gameObject))
                {
                    filter.gameObject.transform.localPosition = new Vector3(
                        filter.gameObject.transform.localPosition.x,
                        filter.gameObject.transform.localPosition.y,
                        filter.gameObject.transform.localPosition.z + 0.1f);
                    State.gameObjects.Add(filter.gameObject);
                }
                else
                {
                    filter.gameObject.transform.localPosition = new Vector3(
                        filter.gameObject.transform.localPosition.x,
                        filter.gameObject.transform.localPosition.y,
                        filter.gameObject.transform.localPosition.z - 0.1f);
                    State.gameObjects.Remove(filter.gameObject);
                }
            }
            if (State.status == ConstructionStatus.feature)
            {
                if (State.highlighted != null && State.highlighted != filter.gameObject)
                {
                    State.highlighted.GetComponent<Renderer>().material = State.commonMaterial;
                    State.highlighted = filter.gameObject;
                    State.highlighted.GetComponent<Renderer>().material = State.highLightMaterial;
                }
                else if (State.highlighted != null && State.highlighted == filter.gameObject)
                {
                    State.highlighted.GetComponent<Renderer>().material = State.commonMaterial;
                    State.highlighted = null;
                } else
                {
                    State.highlighted = filter.gameObject;
                    State.highlighted.GetComponent<Renderer>().material = State.highLightMaterial;
                }
            }
        }
        
    }
}
