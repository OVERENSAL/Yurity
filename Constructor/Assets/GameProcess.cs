using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameProcess : MonoBehaviour
{
    public GameObject playerModel;
    public GameObject currentCanvas;
    public GameObject menuCanvas;
    public Transform cells;
    public float speed = 3f;

    private List<GameObject> mapCells = new List<GameObject>();
    private int stepsCount = 0;
    private Vector3 destination = new Vector3(-0.6f, 0.5f, -2.4f);
    private bool isGo = false;
    private bool stepComplete = false;
    private int steps = 0;
    private float yCoordDiff = 0;


    public void GetRandom()
    {
        steps = Random.Range(1, 5);
        stepsCount += steps;
        if (stepsCount < cells.childCount)
        {
            Debug.Log(steps);
            destination = new Vector3(mapCells[stepsCount - steps].transform.position.x, mapCells[cells.childCount - 1].transform.position.y + yCoordDiff, mapCells[stepsCount - steps].transform.position.z);
            isGo = true;
            stepComplete = false;

            Debug.Log("Your effect: " + mapCells[stepsCount].gameObject.GetComponent<Renderer>().material);
        }
        else
        {
            stepComplete = true;
            destination = new Vector3(mapCells[cells.childCount - 1].transform.position.x, mapCells[cells.childCount - 1].transform.position.y + yCoordDiff, mapCells[cells.childCount - 1].transform.position.z);
            Debug.Log("You win!");
        }
    }

    public void getNextStep()
    {
        if ((steps > 0) && (stepsCount - steps < cells.childCount))
        {
            Debug.Log("Curren cell: " + (stepsCount - steps));
            steps--;
            destination = new Vector3(mapCells[stepsCount - steps].transform.position.x, mapCells[cells.childCount - 1].transform.position.y + yCoordDiff, mapCells[stepsCount - steps].transform.position.z);
            Debug.Log("Curren cell coords: " + destination);
        }
        else
        {
            stepComplete = true;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        currentCanvas.SetActive(false);
        menuCanvas.SetActive(true);
        Debug.Log("START!");
        foreach (Transform cell in cells)
        {
            mapCells.Add(cell.gameObject);
        }

        yCoordDiff = playerModel.transform.position.y - mapCells[0].transform.position.y;
        Vector3 defaultPlayerCoords = new Vector3(mapCells[0].transform.position.x, mapCells[0].transform.position.y + yCoordDiff, mapCells[0].transform.position.z);
        playerModel.transform.position = defaultPlayerCoords;
    }

    // Update is called once per frame
    void Update()
    {
        if (isGo)
        {
            if (!stepComplete)
            {
                playerModel.transform.position = Vector3.MoveTowards(playerModel.transform.position, destination, Time.deltaTime * speed);
                if (playerModel.transform.position == destination)
                {
                    getNextStep();
                }
            }
        }
    }
}
