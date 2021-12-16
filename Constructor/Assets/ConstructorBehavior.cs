using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstructorBehavior : MonoBehaviour
{
    public GameObject layout;
    // Start is called before the first frame update
    void Start()
    {
        layout.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
