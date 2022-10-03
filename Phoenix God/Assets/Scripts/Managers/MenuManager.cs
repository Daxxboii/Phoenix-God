using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;
using LeTai.Asset.TranslucentImage;

public class MenuManager : MonoBehaviour
{
    public Color DefaultColor;
    [Header("Menu Panels")]
    [SerializeField] private GameObject TitlePanel;
    [SerializeField] private GameObject TitleCanvas;
    [SerializeField] private GameObject MainMenuPanel;
    [SerializeField] private GameObject PauseMenuPanel;
    [SerializeField] private GameObject GamePlayPanel;
    [SerializeField] private GameObject GameOverPanel;
    [SerializeField] private Image GameOverBlack;
   

    [SerializeField, Range(0.1f, 2f)] private float TransitionSpeed;
    [SerializeField] private TranslucentImageSource translucentImageSource;
    private ScalableBlurConfig source;

    [Header("Text")]
    [SerializeField] private TextMeshProUGUI ScoreText,MaxScoreText,CountDownText;
    [SerializeField] private TextMeshProUGUI YourScoreNumberText;
    [SerializeField] private TextMeshProUGUI HighScoreNumberText;


    public static MenuManager Instance;

    [Header("Player")]
    public Vector3 PlayerPos;


    private void Awake()
    {
        if (Instance == null) Instance = this;
        source = (ScalableBlurConfig)translucentImageSource.BlurConfig;
        UpdateText();

        Player.PlanesHaveChanged += UpdateText;

        //Intro Screen
        MainMenuPanel.SetActive(false);
        CanvasGroup TitleAlpha = TitlePanel.GetComponent<CanvasGroup>();
        DOVirtual.Float(100f, 0f, 3f, v => { source.Strength = v; TitleAlpha.alpha = v / 100; }).OnComplete(() => { MainMenuPanel.SetActive(true);TitlePanel.SetActive(false);
            TitleCanvas.SetActive(true); translucentImageSource.enabled = false;});
       
    }

    public void Pause()
    {
        GameManager.GameManagerInstance.isPlaying = false;
        translucentImageSource.enabled = true;
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
        UpdateText();
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
        CountDownText.gameObject.SetActive(true);
        PauseMenuPanel.SetActive(false);
        translucentImageSource.enabled = true;
        DOVirtual.Float(100, 0, TransitionSpeed, v => { source.Strength = v; }).OnComplete(() => 
        {
            translucentImageSource.enabled = false;
            CountDownText.gameObject.SetActive(true);
            DOVirtual.Float(4, 0, 3, x => { CountDownText.text = ((int)x).ToString(); }).OnComplete(() =>
             {
                 CountDownText.transform.gameObject.SetActive(false);
                 GameManager.GameManagerInstance.isPlaying = true;
                 GamePlayPanel.SetActive(true);
             });
             
        });
    }

   

    public void Quit()
    {
        Application.Quit();
    }

    public void GameOver()
    {
        GamePlayPanel.SetActive(false);
        GameOverBlack.DOFade(1f, 0.1f).OnComplete(()=> { GameOverBlack.DOFade(0f, 5f).SetEase(Ease.InQuad); });
        ResetGame();
        Tutorial.instance.Reset();
        
    }

    public void ResetGame()
    {
        GameManager.GameManagerInstance.Score = 0;
        WorldGenerator.Singleton.ResetWorld();
        Player.Singleton.Start();
        Player.Singleton.transform.DOMove(PlayerPos, 1f);


        DOVirtual.Float(100, 0, TransitionSpeed, v => { source.Strength = v; }).OnComplete(() =>
        {
            translucentImageSource.enabled = false;
            GameManager.GameManagerInstance.Scene.transform.position = GameManager.GameManagerInstance.SceneStartPos;


            GameOverPanel.SetActive(false);
            PauseMenuPanel.SetActive(false);
            MainMenuPanel.SetActive(true);
            MainMenuPanel.transform.DOScale(1, TransitionSpeed);
        });

    }

    public void Retry()
    {
        //Play Video
        Vector3 ResetPosition = Player.Singleton.CurrentPlane.GetComponent<MeshRenderer>().bounds.center;
        ResetPosition.y = Player.Singleton.transform.position.y;

        Player.Singleton.transform.DOMove(ResetPosition,1f);

        GameOverPanel.SetActive(false);
        Continue();
    }

    private void UpdateText()
    {
        ScoreText.text = ((int)GameManager.GameManagerInstance.Score).ToString();
        MaxScoreText.text = ((int)GameManager.GameManagerInstance.MaxScore).ToString();
    }

}
