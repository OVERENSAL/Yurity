using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameScript : MonoBehaviour
{
    public GameObject plusView;
    public GameObject minusView;
    public GameObject stepView;
    public GameObject stopView;
    public GameObject leftView;
    public GameObject rightView;
    public GameObject shieldView;
    public GameObject reverseView;
    public GameObject saveShieldView;

    public GameObject shield;
    public GameObject GameView;
    public GameObject StartView;
    public GameObject plane;
    public GameObject game;
    public GameObject text;
    public GameObject textMoney;
    public GameObject textSteps;

    public GameObject button;
    public GameObject changeCellVisibleButton;
    public Sprite rules;
    public Sprite noRules;

    private bool move = false;
    private int cellNumber = 0;
    private int money = 0;
    private int stepCount = 0;

    public GameObject endButton;

    private List<string> negativeCells = new List<string>();
    void Start()
    {
        shield.SetActive(false);
        hideFeature();
        text.GetComponent<Text>().text = money.ToString();
        negativeCells.Add("minus");
        negativeCells.Add("stop");
        negativeCells.Add("right");        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (GAMESTATE.player.transform.localPosition == State.currObjectsPosition[State.currObjectsPosition.Count - 1] + new Vector3(0, 0, 0.45f))
        {
            return;
        }
        if (move)
        {
            try
            {
                
                if (cellNumber == GAMESTATE.currCellNumber)
                {
                    move = false;
                    return;
                }
                if (cellNumber < GAMESTATE.currCellNumber)
                {
                    GAMESTATE.player.transform.localPosition = State.currObjectsPosition[cellNumber] + new Vector3(0, 0, 0.45f);
                    if (cellNumber + 1 != GAMESTATE.currCellNumber)
                    {
                        StartCoroutine("ad_timer");
                    }
                }
                if (cellNumber > GAMESTATE.currCellNumber)
                {
                    GAMESTATE.player.transform.localPosition = State.currObjectsPosition[cellNumber] + new Vector3(0, 0, 0.45f);
                    if (cellNumber - 1 != -1)
                    {
                        StartCoroutine("ad_timer");
                    }
                }
                if (GAMESTATE.player.transform.localPosition == State.currObjectsPosition[cellNumber] + new Vector3(0, 0, 0.45f))
                {

                    if (cellNumber < GAMESTATE.currCellNumber)
                    {
                        cellNumber += 1;
                    }
                    if (cellNumber > GAMESTATE.currCellNumber)
                    {
                        cellNumber -= 1;
                    }
                }
                if (GAMESTATE.player.transform.localPosition == State.currObjectsPosition[GAMESTATE.currCellNumber - 1] + new Vector3(0, 0, 0.45f))
                {
                    button.GetComponentInChildren<Text>().text = "Бросить кости";
                    if (GAMESTATE.showFeature)
                    {
                        showFeature();
                    }
                    if (shield.activeSelf && negativeCells.Contains(State.currObjectsMaterial[GAMESTATE.currCellNumber - 1]))
                    {
                        shield.SetActive(false);
                        saveShieldView.SetActive(true);
                    }
                }
                move = false;
                if (State.currObjectsMaterial[GAMESTATE.currCellNumber - 1] == "left")
                {
                    GAMESTATE.currCellNumber += 5;
                }

                if (State.currObjectsMaterial[GAMESTATE.currCellNumber - 1] == "right")
                {
                    GAMESTATE.currCellNumber -= 5;
                    if (GAMESTATE.currCellNumber < 0)
                    {
                        GAMESTATE.currCellNumber = 0;
                    }
                }
            } catch (Exception e)
            {
                print(e);
            }
            
        }
    }

    private void showFeature()
    {
        switch (State.currObjectsMaterial[GAMESTATE.currCellNumber - 1])
        {
            case "plus":
                plusView.SetActive(true);
                money += 100;
                text.GetComponent<Text>().text = money.ToString();
                break;
            case "minus":
                minusView.SetActive(true);
                if (!shield.activeSelf)
                {
                    money -= 100;
                    text.GetComponent<Text>().text = money.ToString();
                }
                break;
            case "step":
                stepView.SetActive(true);
                break;
            case "stop":
                stopView.SetActive(true);
                break;
            case "left":
                leftView.SetActive(true);
                break;
            case "right":
                rightView.SetActive(true);
                break;
            case "shield":
                shieldView.SetActive(true);
                shield.SetActive(true);
                break;
            case "reverse":
                reverseView.SetActive(true);
                break;
            default:
                break;
        }
    }

    private void hideFeature()
    {
        plusView.SetActive(false);
        minusView.SetActive(false);
        stepView.SetActive(false);
        stopView.SetActive(false);
        leftView.SetActive(false);
        rightView.SetActive(false);
        shieldView.SetActive(false);
        reverseView.SetActive(false);
        saveShieldView.SetActive(false);
    }

    IEnumerator ad_timer()
    {
        yield return new WaitForSeconds(0.5f);
        move = true;
    }

    public void getRandomInt()
    {
        var random = new System.Random();
        if (GAMESTATE.currCellNumber == -1)
        {
            GAMESTATE.currCellNumber += 2;
        }
        int i = random.Next(1, 7);
        GAMESTATE.currCellNumber += i;
        button.GetComponentInChildren<Text>().text = i.ToString();
        move = true;
        hideFeature();
        stepCount += 1;
        if (GAMESTATE.currCellNumber >= State.currGameObjects.Count)
        {
            GAMESTATE.currCellNumber = State.currGameObjects.Count;
        }
        GAMESTATE.money = money;
        GAMESTATE.steps = stepCount;
    }

    public void exit()
    {
        State.EndView.SetActive(true);
        print(money);
        textMoney.GetComponent<Text>().text = GAMESTATE.money.ToString();
        textSteps.GetComponent<Text>().text = GAMESTATE.steps.ToString();
        GameView.SetActive(false);
        for(int i = 0; i < plane.transform.childCount; i++)
        {
            Destroy(plane.transform.GetChild(i).gameObject);
        }
        GAMESTATE.player = null;
        GAMESTATE.showFeature = true;
        GAMESTATE.currCellNumber = -1;
        cellNumber = 0;      
        game.SetActive(false);
        money = 0;
        stepCount = 0;
        GAMESTATE.money = 0;
        GAMESTATE.steps = 0;
    }

    public void lox()
    {
        StartView.SetActive(true);
        State.EndView.SetActive(false);
    }

    public void changeCellFeatureView()
    {
        
        if (GAMESTATE.showFeature)
        {
            changeCellVisibleButton.GetComponent<Image>().sprite = rules;
        }
        else
        {
            changeCellVisibleButton.GetComponent<Image>().sprite = noRules;
        }
        GAMESTATE.showFeature = !GAMESTATE.showFeature;
    }
}
