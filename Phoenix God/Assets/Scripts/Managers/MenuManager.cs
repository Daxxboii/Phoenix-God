using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;
using LeTai.Asset.TranslucentImage;

public class MenuManager : MonoBehaviour
{
    [Header("Menu Panels")]
    [SerializeField] private GameObject MainMenuPanel;
    [SerializeField] private GameObject PauseMenuPanel;
    [SerializeField] private GameObject GamePlayPanel;
    [SerializeField] private GameObject GameOverPanel;


    [SerializeField, Range(0.1f, 2f)] private float TransitionSpeed;
    [SerializeField] private TranslucentImageSource translucentImageSource;
    private ScalableBlurConfig source;

    [Header("Text")]
    [SerializeField] private TextMeshProUGUI ScoreText,MaxScoreText,CountDownText;
    [SerializeField] private TextMeshProUGUI YourScoreNumberText;
    [SerializeField] private TextMeshProUGUI HighScoreNumberText;


    public static MenuManager Instance;



    private void Awake()
    {
        if (Instance == null) Instance = this;
        source = (ScalableBlurConfig)translucentImageSource.BlurConfig;
        source.Strength = 0;
    }

    public void Pause()
    {
        GameManager.GameManagerInstance.isPlaying = false;
        DOVirtual.Float(0, 100, TransitionSpeed, v =>
        {
            source.Strength = v;
            PauseMenuPanel.SetActive(true);
            GamePlayPanel.SetActive(false);
        });
    }

    //When play button is pressed
    public void Play()
    {
        GameManager.GameManagerInstance.Score = 0;

        MainMenuPanel.transform.DOScale(1.5f, TransitionSpeed).OnComplete(()=> {
            GamePlayPanel.SetActive(true);
            MainMenuPanel.SetActive(false);
            GameManager.GameManagerInstance.isPlaying = true;
        });
    }

    //When Continue Button is Pressed From Pause Menu
    public void Continue()
    {
        CountDown();
       
    }

    void CountDown()
    {
        PauseMenuPanel.SetActive(false);
        DOVirtual.Float(100, 0, TransitionSpeed, v => { source.Strength = v; }).OnComplete(() => 
        {
            CountDownText.gameObject.SetActive(true);
            DOVirtual.Float(3, 0, 3, x => { CountDownText.text = ((int)x).ToString(); }).OnComplete(() =>
             {
                 CountDownText.transform.gameObject.SetActive(false);
                 GameManager.GameManagerInstance.isPlaying = true;
                 GamePlayPanel.SetActive(true);
                
             });
             
        });
    }

    public void BackToMenu()
    {
        DOVirtual.Float(100, 0, TransitionSpeed, v => { source.Strength = v; }).OnComplete(() =>
        {
            GameOverPanel.SetActive(false);
            PauseMenuPanel.SetActive(false);
            MainMenuPanel.SetActive(true);
            MainMenuPanel.transform.DOScale(1, TransitionSpeed);
        });
        
    }

    public void Quit()
    {
        Application.Quit();
    }

    public void GameOver()
    {
        GamePlayPanel.SetActive(false);
        GameOverPanel.SetActive(true);
        YourScoreNumberText.text = GameManager.GameManagerInstance.Score.ToString();
        HighScoreNumberText.text = GameManager.GameManagerInstance.MaxScore.ToString();

    }

    public void Retry()
    {
        //Play Video
        GamePlayPanel.SetActive(true);
        GameOverPanel.SetActive(false);
        Continue();
    }

    private void Update()
    {
        ScoreText.text = ((int)GameManager.GameManagerInstance.Score).ToString();
        MaxScoreText.text = ((int)GameManager.GameManagerInstance.MaxScore).ToString();
    }

}
