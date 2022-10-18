using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial : MonoBehaviour
{
    [SerializeField] private Image TutorialImage;
    [SerializeField] private Sprite[] Tutorial_Images;

    public static Tutorial instance;

    public int ImageIndex;

    private void Start()
    {
        if (instance == null) instance = this;
        TutorialImage.sprite = Tutorial_Images[0];
        Player.PlanesHaveChanged += NextImage;
      
    }
    public void NextImage()
    {
        ImageIndex++;
        if (ImageIndex >= 3)
        {
            TutorialImage.gameObject.SetActive(false);
            Player.PlanesHaveChanged -= NextImage;
        }
        else
        {
            TutorialImage.sprite = Tutorial_Images[ImageIndex];
        }
    }

    public void Reset()
    {
        ImageIndex = 0;
        TutorialImage.sprite = Tutorial_Images[0];
        TutorialImage.gameObject.SetActive(true);
        Player.PlanesHaveChanged += NextImage;
    }
}
