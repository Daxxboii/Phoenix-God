using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using LeTai.Asset.TranslucentImage;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

using static UnityEngine.EventSystems.EventTrigger;


public class MenuManager : MonoBehaviour
{
    

    
    // public Color DefaultColor;
    [Header("Menu Panels")]
    [SerializeField]
    private GameObject TitlePanel;

    [SerializeField]
    private GameObject MainMenuPanel;

    [SerializeField]
    private GameObject PauseMenuPanel;

    [SerializeField]
    private GameObject GamePlayPanel;

    [SerializeField]
    private Image GameOverBlack;

    [SerializeField]
    private Image GameOverRetryPanelBlack;

    [SerializeField, Range(0.1f, 2f)]
    private float TransitionSpeed;

    [SerializeField]
    private TranslucentImageSource translucentImageSource;

    private ScalableBlurConfig source;

    [Header("Text")]
    [SerializeField]
    private TextMeshProUGUI

            ScoreText,
            MaxScoreText,
            CountDownText;

    [SerializeField]
    private TextMeshProUGUI YourScoreNumberText;

    [SerializeField]
    private TextMeshProUGUI HighScoreNumberText;

    [SerializeField]
    private TextMeshProUGUI RetryButtonCount;

    [SerializeField] private TextMeshProUGUI TitleTextBackGround;

    public GameObject TitleName;

    public GameObject PauseMenuButton;

    public static MenuManager Instance;

    [Header("Player")]
    public Vector3 PlayerPos;

    public Image

            RetryButtom,
            PowerUpButton;

    [Header("Colors")]
    public Color DisabledColor;

    public Color ActivatedColor;

    public Color[] TitleTextOutlines;

    private int TitleTextColorIndex;

    Material TitleTextBackGroundMaterial;

    private void Awake()
    {
        if (Instance == null) Instance = this;
        source = (ScalableBlurConfig)translucentImageSource.BlurConfig;
        TitleTextBackGroundMaterial = TitleTextBackGround.fontSharedMaterial;
        TitleTextBackGroundMaterial.EnableKeyword("_UnderlayColor");
        UpdateTitleColor();
        UpdateText();
        //RetryButtom.color = DisabledColor;
        //RetryButtonCount.color = DisabledColor;
        RetryButtonCount.text = "1x";
        TitleName.gameObject.SetActive(false);

        Player.PlanesHaveChanged += UpdateText;
        Player.ResetWorld += UpdateRetryButton;

        //Intro Screen
        MainMenuPanel.SetActive(false);
        CanvasGroup TitleAlpha = TitlePanel.GetComponent<CanvasGroup>();
        DOVirtual
            .Float(100f,
            0f,
            3f,
            v =>
            {
                source.Strength = v;
                TitleAlpha.alpha = v / 100;
                if (v <= 10) TitleName.gameObject.SetActive(true);
            })
            .OnComplete(() =>
            {
                MainMenuPanel.SetActive(true);
                TitlePanel.SetActive(false);
            });
    }

    /*public void Pause()
    {
        GameManager.GameManagerInstance.isPlaying = false;
        PauseMenuPanel.SetActive(true);
        PauseMenuButton.SetActive(false);
        Player.Singleton.Player_Animator.SetBool("Gliding", false);
        Player.Singleton.Phoenix.transform.rotation = Quaternion.identity;
    }*/

    //When play button is pressed
    public void Play()
    {
        UpdateText();
        TitleName.gameObject.SetActive(false);
        GameManager.GameManagerInstance.Score = 0;
        MainMenuPanel
            .transform
            .DOScale(1.5f, TransitionSpeed)
            .OnComplete(() =>
            {
                GamePlayPanel.SetActive(true);
                MainMenuPanel.SetActive(false);
                GameManager.GameManagerInstance.isPlaying = true;
                AudioManager.instance.currentVolume = 0.1f;
                AudioManager.instance.MakeWindLouder();
            });

        DOVirtual
            .Float(0,
            1,
            1f,
            x =>
            {
            })
            .OnComplete(() =>
            {
                Player.Singleton.PerformedStep = false;
                Player.Singleton.Move();
                DOVirtual
                    .Float(0,
                    1,
                    1f,
                    x =>
                    {
                    })
                    .OnComplete(() =>
                    {
                        Player.Singleton.PerformedStep = true;
                        Player.Singleton.Move();
                        InputManager.CanReceiveInput = true;
                    });
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
        CountDownText.gameObject.SetActive(true);
        DOVirtual
            .Float(4,
            1,
            3,
            x =>
            {
                CountDownText.text = ((int)x).ToString();
            })
            .OnComplete(() =>
            {
                CountDownText.transform.gameObject.SetActive(false);
                GameManager.GameManagerInstance.isPlaying = true;
                GamePlayPanel.SetActive(true);
                Player.Singleton.Player_Animator.SetBool("Gliding", true);
                PauseMenuButton.SetActive(true);
            });
    }
    public void GameOver()
    {
        Player.Singleton.SetMeshVis(false);
        GamePlayPanel.SetActive(false);
        GameOverBlack
            .DOFade(1f, 1f)
            .OnComplete(() =>
            {
                GameOverBlack.DOFade(0f, 5f).SetEase(Ease.InQuad);
                ResetGame();
            });

        Tutorial.instance.Reset();
        AudioManager.instance.MakeWindLouder();
    }

    public void ResetGame()
    {
        UpdateTitleColor();
        RetryButtonCount.color = ActivatedColor;
        RetryButtonCount.text = "1x";
        GameManager.GameManagerInstance.Score = 0;
        AlternateWorldGenerator.Singleton.ResetWorld();
        Player.Singleton.Start();
        DOVirtual
            .Float(100,
            0,
            TransitionSpeed,
            v =>
            {
                source.Strength = v;
            })
            .OnComplete(() =>
            {
                TitleName.gameObject.SetActive(true);
                translucentImageSource.enabled = false;
                PauseMenuPanel.SetActive(false);
                MainMenuPanel.SetActive(true);
                MainMenuPanel.transform.DOScale(1, TransitionSpeed);
            });
    }

    public void UpdateRetryButton()
    {
        GameManager.GameManagerInstance.isPlaying = false;
        RetryButtonCount.color = ActivatedColor;

        Retry();
    }

    public void Retry()
    {
        GameOverRetryPanelBlack.DOFade(0f, 1f);
        Player.Singleton.ResetSunInstantly();
        Player.ResetIndex--;

        Player.Singleton.SetMeshVis(false);
        PauseMenuPanel.SetActive(false);
        CountDownText.gameObject.SetActive(true);
        DOVirtual
            .Float(4,
            1,
            3,
            x =>
            {
                CountDownText.text = ((int)x).ToString();
            })
            .OnComplete(() =>
            {
                Player.Singleton.SetMeshVis(true);
                CountDownText.transform.gameObject.SetActive(false);
                GameManager.GameManagerInstance.isPlaying = true;
                GamePlayPanel.SetActive(true);

                // RetryButtonCount.color = DisabledColor;
                RetryButtonCount.text = Player.ResetIndex.ToString() + "x";
                // RetryButtom.color = DisabledColor;

                Player.Singleton.resetDifficulty();
            });
    }

    private void UpdateText()
    {
        ScoreText.text =
            ((int)GameManager.GameManagerInstance.Score).ToString();
        MaxScoreText.text =
            ((int)GameManager.GameManagerInstance.MaxScore).ToString();
    }


    public void UpdateTitleColor()
    {
        TitleTextBackGround.outlineColor = TitleTextOutlines[TitleTextColorIndex];

        if (TitleTextColorIndex == TitleTextOutlines.Length - 1)
        {
            TitleTextColorIndex = 0;
        }
        else
        {
            TitleTextColorIndex++;
        }
    }



}

