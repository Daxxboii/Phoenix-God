using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SwapSprites : MonoBehaviour
{
    public Sprite[] sprites;

    private Image phoenixImage;

    private bool wingspos;

    private Vector3 pos,upd;

    public static SwapSprites instance;
    void Awake()
    {
        instance = this;
        phoenixImage = GetComponent<Image>();
        StartCoroutine("UpdateSprite");
        pos = transform.localPosition;
        upd = pos;
    }

    void Update()
    {
        if (!GameManager.GameManagerInstance.isPlaying)
        {
            pos.y = Mathf.PingPong(Time.time * 10, upd.y + 1f);
            transform.localPosition = pos;
        }
        else
        {
             phoenixImage.sprite = sprites[1];
        }
    }

    IEnumerator UpdateSprite()
    {
        yield return new WaitForSeconds(0.1f);
        if(!GameManager.GameManagerInstance.isPlaying) StartCoroutine("UpdateSprite");
        wingspos = !wingspos;
        if (wingspos) phoenixImage.sprite = sprites[0];
        else phoenixImage.sprite = sprites[1];
    }

}
