using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

//using MyBox;
public class GameManager : MonoBehaviour
{
    public static GameManager GameManagerInstance; //Make a GameManger instance accesible by everyone , Singleton

    [Header("Gameplay")]
    public bool isPlaying;

    [SerializeField, HideInInspector]
    public int

            Score,
            MaxScore;

    [SerializeField]
    private string MaxScoreSaveName;

    public void Awake()
    {
        if (GameManagerInstance == null) GameManagerInstance = this; //Singleton
        Application.targetFrameRate = 60;

        //Load High Score
        if (PlayerPrefs.HasKey(MaxScoreSaveName))
            MaxScore = (int)PlayerPrefs.GetInt(MaxScoreSaveName);
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
