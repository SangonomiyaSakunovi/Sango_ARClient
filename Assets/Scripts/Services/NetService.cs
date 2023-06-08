using Assets.Scripts.Services;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using SangoARCommons.Constants;
using UnityEngine.Events;
using SangoARCommons.Classs;
using System.Text.Json;
using System;

//Developer : SangonomiyaSakunovi
//Discription: The NetService.

public class NetService : MonoBehaviour
{
    public static NetService Instance = null;

    private IEnumerator asyncSendChatGPTCompletionRequestIEnumerator;

    public void InitService()
    {
        string ipAddress = SetIPAddress(ConfigureModeCode.Offline);
        Instance = this;
    }

    private string SetIPAddress(ConfigureModeCode mode)
    {
        string ipAddress = null;
        if (mode == ConfigureModeCode.Online)
        {
            ipAddress = "124.220.20.98:5055";
        }
        else if (mode == ConfigureModeCode.Offline)
        {
            ipAddress = "127.0.0.1:5055";
        }
        return ipAddress;
    }

    public void AsyncSendChatGPTCompletionRequest(string chatGPTCompletionRequestJson)
    {
        asyncSendChatGPTCompletionRequestIEnumerator = AsyncOnChatGPTCompletionRequest(chatGPTCompletionRequestJson);
        StartCoroutine(asyncSendChatGPTCompletionRequestIEnumerator);
    }

    private IEnumerator AsyncOnChatGPTCompletionRequest(string chatGPTCompletionRequestJson)
    {
        using (UnityWebRequest unityWebRequest = new UnityWebRequest(ChatGTPNetConstant.ChatGPTCompletionUrl, "POST"))
        {
            byte[] chatGPTCompletionRequestJsonByteData = System.Text.Encoding.UTF8.GetBytes(chatGPTCompletionRequestJson);
            unityWebRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(chatGPTCompletionRequestJsonByteData);
            unityWebRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            unityWebRequest.SetRequestHeader(ChatGTPNetConstant.ChatGPTRequestHeader1Key, ChatGTPNetConstant.ChatGPTRequestHeader1Value);
            unityWebRequest.SetRequestHeader(ChatGTPNetConstant.ChatGPTRequestHeader2Key, ChatGTPNetConstant.ChatGPTRequestHeader2Value);
            yield return unityWebRequest.SendWebRequest();

            if (unityWebRequest.responseCode == 200)    //200 means get response; 404 means unfind; 500 means serverSelfBug
            {
                string chatGPTCompletionResponseJson = unityWebRequest.downloadHandler.text;
                if (chatGPTCompletionResponseJson != null)
                {                   
                    DialogSystem.Instance.OnChatGPTDialogResponse(chatGPTCompletionResponseJson);
                }
                StopCoroutine(asyncSendChatGPTCompletionRequestIEnumerator);                
            }
        }
    }


    private enum ConfigureModeCode
    {
        Offline,
        Online
    }
}
