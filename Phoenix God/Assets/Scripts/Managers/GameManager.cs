using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;


//using MyBox;
public class GameManager : MonoBehaviour
{
    public static GameManager GameManagerInstance;//Make a GameManger instance accesible by everyone , Singleton
    

    [Header("Player Related")]
    //Player GameObject
    [SerializeField] private GameObject PlayerGameObject;

    //For Inputs
    [SerializeField, HideInInspector] public Vector2 LRInput;

    [HideInInspector] public Vector3 PlayerPosition;


    [Header("Gameplay")]
    [SerializeField] public Transform Scene;
     public bool isPlaying;
    [SerializeField, HideInInspector] public int Score, MaxScore;
    [SerializeField] private string MaxScoreSaveName;
    [SerializeField] public Vector3 SceneStartPos;

   


    public void Awake()
    {
        if(GameManagerInstance == null)GameManagerInstance = this; //Singleton
        //Load High Score
        if(PlayerPrefs.HasKey(MaxScoreSaveName))MaxScore = (int)PlayerPrefs.GetInt(MaxScoreSaveName);

        Player.PlanesHaveChanged += UpdateScore;
    }

    private void Update()
    {
        if (isPlaying)
        {
          //  Scene.Translate(Vector3.forward * Time.deltaTime * Player.Singleton.ForwardPlayerSpeed);
            PlayerPosition = PlayerGameObject.transform.position;
        }
    }

    public void GameOver()
    {

        isPlaying = false;
        MenuManager.Instance.GameOver();
        PlayerPrefs.SetInt(MaxScoreSaveName,MaxScore);
        PlayerPrefs.Save();
    }

    void UpdateScore()
    {
        Score++;
        if (Score > MaxScore) MaxScore = Score;
    }
   
}
