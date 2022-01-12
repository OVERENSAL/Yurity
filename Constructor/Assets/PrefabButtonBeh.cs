using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabButtonBeh : MonoBehaviour
{
    public GameObject plane;
    public GameObject gameObject;
    public Material material;

    public void OnClick()
    {
        GameObject gO = Instantiate(gameObject) as GameObject;
        gO.transform.SetParent(plane.transform);
        gO.transform.position = new Vector3(plane.transform.position.x, plane.transform.position.y + gO.transform.position.y, plane.transform.position.z);// + new Vector3(0, 0.035f, 0);
        //gO.transform.localScale = plane.transform.localScale / 10;
        gO.GetComponent<Renderer>().material = material;
        //gO.GetComponent<BoxCollider>().enabled = true;
        gO.AddComponent<MoveObj>();
        gO.AddComponent<PlaneBehavior>();
        State.gameObjects["yasosubiby"].Add(gO);
    }

    // Start is called before the first frame update
    void Start()
    {
        if(!State.gameObjects.ContainsKey("yasosubiby"))
        {
            State.gameObjects.Add("yasosubiby", new List<GameObject>());
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
