using SangoARCommons.Classs;
using SangoARNetProtocol;
using System;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: 

public class ChatGPTRequest : BaseRequest
{
    private ChatGPTCompletionReq chatGPTCompletionReq;

    public override void InitRequset()
    {
        base.InitRequset();
        NetOpCode = OperationCode.Chat;
    }

    public void SetChatGPTCompletionReq(ChatGPTCompletionReq chatGPTReq)
    {
        chatGPTCompletionReq = chatGPTReq;
    }

    public void DefaultRequest()
    {
        string chatGPTCompletionRequestJson = SetJsonString(chatGPTCompletionReq);
        netService.AsyncSendChatGPTCompletionRequest(chatGPTCompletionRequestJson);
    }

    public override void OnOperationRequest()
    {
        throw new NotImplementedException();
    }

    public override void OnOperationResponse(SangoNetMessage sangoNetMessage)
    {
        throw new NotImplementedException();
    }
}
