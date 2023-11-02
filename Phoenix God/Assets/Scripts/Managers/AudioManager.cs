using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using MyBox;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioSource;

    public float Level;

    [ReadOnly] public float CurrentVolume;

    public Sprite[] LevelSprites;

    public Image LevelButton;



    void Start()
    {
        Level = PlayerPrefs.GetFloat("Volume", 1);
        PlayerPrefs.SetFloat("Volume", Level);
        PlayerPrefs.Save();

        LevelButton.sprite = LevelSprites[(int)Level];


        CurrentVolume = (Level);

        audioSource.volume = CurrentVolume;
    }

    public void UpdateVolume()
    {
        Level++;

        if (Level > 1)
        {
            Level = 0;
        }

        LevelButton.sprite = LevelSprites[(int)Level];
        CurrentVolume = (Level);
        audioSource.volume = CurrentVolume;

        PlayerPrefs.SetFloat("Volume", Level);
        PlayerPrefs.Save();
    }


}
