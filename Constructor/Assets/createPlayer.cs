using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class createPlayer : MonoBehaviour
{
    public GameObject player;
    public GameObject chooseView;
    public GameObject gameView;
    public GameObject plane;
    public void onClick()
    {
        chooseView.SetActive(false);
        gameView.SetActive(true);

        GameObject gO = Instantiate(player) as GameObject;
        gO.transform.SetParent(plane.transform);
        gO.transform.localPosition = State.currObjectsPosition[0] + new Vector3(0, 0, 0.45f);
        gO.transform.localScale = new Vector3(0.25f, 0.4f, 0.25f);
        GAMESTATE.player = gO;
    }
}
