using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class decSaveScript : MonoBehaviour
{
    public GameObject decorationView;
    public GameObject saveView;
    public GameObject plane;
    public void onClick()
    {
        State.status = ConstructionStatus.init;
        decorationView.SetActive(false);
        saveView.SetActive(true);
        for (int i = 0; i < State.otherObjects.Count; i++)
        {
            string material = State.otherObjects[i].GetComponent<Renderer>().material.ToString().Split(' ')[0];

            if (material != State.parkMaterial.ToString().Split(' ')[0])
            {
                Destroy(State.otherObjects[i]);
                State.otherObjects.Remove(State.otherObjects[i]);
            }
        }
    }
}
