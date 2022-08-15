using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MenuManager : MonoBehaviour
{
    [Header("Menu Panels")]
    [SerializeField] private GameObject MainMenuPanel;
    [SerializeField] private GameObject PauseMenuPanel;

    [SerializeField,Range(0.1f,2f)] private float TransitionSpeed;

    public void Pause()
    {
        GameManager.GameManagerInstance.isPlaying = false;
    }

    public void Play()
    {
        MainMenuPanel.transform.DOScale(1.5f, 2).SetEase(Ease.OutBounce).OnComplete(()=> {
            GameManager.GameManagerInstance.isPlaying = true;
        });
    }

    public void Continue()
    {
        GameManager.GameManagerInstance.isPlaying = true;
    }

    public void Quit()
    {
        Application.Quit();
    }


}
