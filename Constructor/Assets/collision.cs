using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collision : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Renderer>().material != State.errorMaterial)
        {
            other.gameObject.GetComponent<Renderer>().material = State.errorMaterial;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.GetComponent<Renderer>().material != State.errorMaterial)
        {
            other.gameObject.GetComponent<Renderer>().material = State.errorMaterial;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<Renderer>().material != State.parkMaterial)
        {
            other.gameObject.GetComponent<Renderer>().material = State.parkMaterial;
        }
    }
}
