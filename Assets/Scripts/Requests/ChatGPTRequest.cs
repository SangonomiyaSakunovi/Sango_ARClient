using SangoARCommons.Classs;
using System;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: 

public class ChatGPTRequest : BaseRequest
{
    private ChatGPTCompletionReq chatGPTCompletionReq;

    public void SetChatGPTCompletionReq(ChatGPTCompletionReq chatGPTReq)
    {
        chatGPTCompletionReq = chatGPTReq;
    }

    public void DefaultRequest()
    {
        string chatGPTCompletionRequestJson = SetJsonString(chatGPTCompletionReq);
        netService.AsyncSendChatGPTCompletionRequest(chatGPTCompletionRequestJson);
    }   
}
