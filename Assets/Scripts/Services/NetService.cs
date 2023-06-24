using SangoARCommons.Constants;
using SangoARNetProtocol;
using SangoIOCPNet;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

//Developer : SangonomiyaSakunovi
//Discription: The NetService.

public class NetService : MonoBehaviour
{
    public static NetService Instance = null;

    public IOCPPeer<ClientPeer> ClientInstance;
    private int localIPPort = 52037;

    private LoginRequest loginRequest;

    public void InitService()
    {
        string ipAddress = SetIPAddress(ConfigureModeCode.Offline);
        Instance = this;
        InitClientInstance(ipAddress, localIPPort);
        loginRequest = GetComponent<LoginRequest>();
    }

    private void InitClientInstance(string ipAddress, int localIPPort)
    {
        ClientInstance = new IOCPPeer<ClientPeer>();
        ClientInstance.InitClient(ipAddress, localIPPort);

        IOCPLog.LogInfoCallBack = Debug.Log;
        IOCPLog.LogWarningCallBack = Debug.LogWarning;
        IOCPLog.LogErrorCallBack = Debug.LogError;
        IOCPLog.LogDoneCallBack = Debug.Log;
        IOCPLog.LogProcessingCallBack = Debug.Log;
    }

    public void SendOperationRequest(OperationCode operationCode, MessageBody messageBody)
    {
        ClientInstance.ClientPeer.SendOperationRequest(operationCode, messageBody);
    }

    public void OnOperationResponse(SangoNetMessage sangoNetMessage)
    {
        switch (sangoNetMessage.MessageHead.OperationCode)
        {
            case OperationCode.Login:
                {
                    loginRequest.OnOperationResponse(sangoNetMessage);
                }                   
                break;
            default:
                {
                    Debug.Log("找不到对应的OperationCode");
                }
                break;
        }
    }

    public void CloseClientInstance()
    {
        ClientInstance.CloseClient();
    }

    #region ChatGPT
    private IEnumerator asyncSendChatGPTCompletionRequestIEnumerator;

    public void AsyncSendChatGPTCompletionRequest(string chatGPTCompletionRequestJson)
    {
        asyncSendChatGPTCompletionRequestIEnumerator = AsyncOnChatGPTCompletionRequest(chatGPTCompletionRequestJson);
        StartCoroutine(asyncSendChatGPTCompletionRequestIEnumerator);
    }

    private IEnumerator AsyncOnChatGPTCompletionRequest(string chatGPTCompletionRequestJson)
    {
        using (UnityWebRequest unityWebRequest = new UnityWebRequest(ChatGPTConstant.ChatGPTCompletionUrl, "POST"))
        {
            byte[] chatGPTCompletionRequestJsonByteData = System.Text.Encoding.UTF8.GetBytes(chatGPTCompletionRequestJson);
            unityWebRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(chatGPTCompletionRequestJsonByteData);
            unityWebRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            unityWebRequest.SetRequestHeader(ChatGPTConstant.ChatGPTRequestHeader1Key, ChatGPTConstant.ChatGPTRequestHeader1Value);
            unityWebRequest.SetRequestHeader(ChatGPTConstant.ChatGPTRequestHeader2Key, ChatGPTConstant.ChatGPTRequestHeader2Value);
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
    #endregion

    private string SetIPAddress(ConfigureModeCode mode)
    {
        string ipAddress = null;
        if (mode == ConfigureModeCode.Online)
        {
            ipAddress = "124.220.20.98";
        }
        else if (mode == ConfigureModeCode.Offline)
        {
            ipAddress = "127.0.0.1";
        }
        return ipAddress;
    }

    private enum ConfigureModeCode
    {
        Offline,
        Online
    }
}
