using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial : MonoBehaviour
{
    [SerializeField] private Image TutorialImage;
    [SerializeField] private Sprite[] Tutorial_Images;

    public RectTransform ImageRect;

    public static Tutorial instance;

    public int ImageIndex;

    public  bool TutorialOver = false;



    private void Start()
    {
        if (instance == null) instance = this;
        TutorialImage.sprite = Tutorial_Images[0];
        Player.PlanesHaveChanged += NextImage;
      
    }
    public void NextImage()
    {
        ImageIndex++;
        if (ImageIndex==2)
        {
            TutorialImage.sprite = Tutorial_Images[ImageIndex];
            StartCoroutine(Disable());
            Player.PlanesHaveChanged -= NextImage;
        }
        else
        {
            TutorialImage.sprite = Tutorial_Images[ImageIndex];
            
        }
    }

    IEnumerator Disable(){
        yield return new WaitForSeconds(0.5f);
        TutorialImage.gameObject.SetActive(false);
        TutorialOver = true;

    }


    public void Reset()
    {
        ImageIndex = 0;
        TutorialImage.sprite = Tutorial_Images[0];
        TutorialImage.gameObject.SetActive(true);
        Player.PlanesHaveChanged += NextImage;
        TutorialOver = false;
    }
}
