using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioSource;

    public float Level;

    [HideInInspector] public float MaxVolume;
    [HideInInspector]public float currentVolume;

    public Sprite[] LevelSprites;

    public Image[] LevelButtons;

    public static AudioManager instance;

    void Start()
    {
        instance = this;

        Player.PlanesHaveChanged += MakeWindLouder;
       

        Level = PlayerPrefs.GetFloat("Volume",2);
        PlayerPrefs.SetFloat("Volume", Level);
        PlayerPrefs.Save();
        
        foreach (Image image in LevelButtons)
        {
            image.sprite = LevelSprites[(int)Level];
        }

        MaxVolume = (Level / 2);

        audioSource.volume = MaxVolume;
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
            image.sprite = LevelSprites[(int)Level];
        }

        MaxVolume = (Level / 2);

        MakeWindLouder();

        PlayerPrefs.SetFloat("Volume",Level);
        PlayerPrefs.Save();
    }
    public void MakeWindLouder()
    {
        if (GameManager.GameManagerInstance.isPlaying) currentVolume += 0.03f/*Time.deltaTime * 0.0001f*/;
        else currentVolume = MaxVolume;
        currentVolume = Mathf.Clamp(currentVolume, 0.01f, MaxVolume);
        audioSource.volume = currentVolume;
    }
    
}
