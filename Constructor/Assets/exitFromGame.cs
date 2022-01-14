using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class exitFromGame : MonoBehaviour
{
    public GameObject startView;
    public GameObject noGamesView;

    public void onClick()
    {
        startView.SetActive(true);
        noGamesView.SetActive(false);
    }
}
