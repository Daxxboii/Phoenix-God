using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;


//using MyBox;
public class GameManager : MonoBehaviour
{
    public static GameManager GameManagerInstance;//Make a GameManger instance accesible by everyone , Singleton

    [Header("Gameplay")]
    public bool isPlaying;
    [SerializeField, HideInInspector] public int Score, MaxScore;
    [SerializeField] private string MaxScoreSaveName;


    public void Awake()
    {
        if (GameManagerInstance == null) GameManagerInstance = this; //Singleton

        //Load High Score
        if (PlayerPrefs.HasKey(MaxScoreSaveName)) MaxScore = (int)PlayerPrefs.GetInt(MaxScoreSaveName);
        Player.PlanesHaveChanged += UpdateScore;
    }


    public void GameOver()
    {
        isPlaying = false;
        MenuManager.Instance.GameOver();
        PlayerPrefs.SetInt(MaxScoreSaveName, MaxScore);
        PlayerPrefs.Save();
    }

    void UpdateScore()
    {
        Score++;
        if (Score > MaxScore) MaxScore = Score;
    }

}
