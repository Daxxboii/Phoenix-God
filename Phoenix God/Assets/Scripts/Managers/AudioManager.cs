﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioSource;

    public int Level;

    public Sprite[] LevelSprites;

    public Image[] LevelButtons;

    void Start()
    {
        if (PlayerPrefs.HasKey("Volume"))
        {
            Level = PlayerPrefs.GetInt("Volume");
        }
        else
        {
            Level = 2;
            PlayerPrefs.SetInt("Volume", Level);
            PlayerPrefs.Save();
        }
        foreach (Image image in LevelButtons)
        {
            image.sprite = LevelSprites[Level];
        }
        audioSource.volume = ((float)Level / 3);
    }

    public void UpdateVolume()
    {
        Level++;

        if(Level > 2)
        {
            Level = 0;
        }
        foreach (Image image in LevelButtons)
        {
            image.sprite = LevelSprites[Level];
        }

        audioSource.volume = ((float)Level / 2);
        PlayerPrefs.SetInt("Volume", Level);
        PlayerPrefs.Save();
    }

    
}