using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabButtonBeh : MonoBehaviour
{
    public GameObject plane;
    public GameObject gameObject;
    public Material material;
    AudioSource audio = new AudioSource();

    void Start()
    {
        audio = GetComponent<AudioSource>();
    }

    public void OnClick()
    {
        audio.PlayOneShot(State.objCreate, 1.0f);
        GameObject gO = Instantiate(gameObject) as GameObject;
        gO.transform.SetParent(plane.transform);
        gO.transform.position = new Vector3(plane.transform.position.x, plane.transform.position.y + gO.transform.position.y, plane.transform.position.z);
        gO.GetComponent<Renderer>().material = material;
        gO.GetComponent<MeshCollider>().enabled = false;
        gO.AddComponent<BoxCollider>().isTrigger = true;
        gO.AddComponent<MoveObj>();
        gO.AddComponent<PlaneBehavior>();
        State.otherObjects.Add(gO);
    }
}
