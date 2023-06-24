using SangoARCommons.Classs;
using SangoARCommons.Constants;
using System.Collections.Generic;
using System.Text.Json;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: 

public class DialogSystem : BaseSystem
{
    public static DialogSystem Instance = null;

    public DialogWindow dialogWindow;

    private string chatGPTAIRolePrompt = "Å®º¢,´ÏÃ÷,ÓÄÄ¬";
    private float chatGPTAITemperature = 0.7f;

    private ChatGPTRequest chatGPTRequest;
    private List<ChatGPTCompletionMessageInfo> historyChatGPTCompletionMessageInfoList = new List<ChatGPTCompletionMessageInfo>();

    public override void InitSystem()
    {
        base.InitSystem();
        Instance = this;
        chatGPTRequest = GetComponent<ChatGPTRequest>();
    }

    public void EnterDialog()
    {
        GameManager.Instance.SetGameMode(GameModeCode.ChatGPTDialogueMode);
        GameManager.Instance.SetCursorShowType(CursorShowTypeCode.Show);
        dialogWindow.SetWindowState(true);
        InitHistoryChatGPTCompletionMessageInfoList();
    }

    public void SendContinuesChatGPTDialogRequest(string message)
    {
        ChatGPTCompletionMessageInfo currentMessage = new ChatGPTCompletionMessageInfo
        {
            role = "user",
            content = message
        };
        historyChatGPTCompletionMessageInfoList.Add(currentMessage);
        ChatGPTCompletionReq chatGPTCompletionReq = new ChatGPTCompletionReq()
        {
            model = ChatGPTConstant.ChatGPTCompletionModel,
            temperature = chatGPTAITemperature,
            messages = historyChatGPTCompletionMessageInfoList
        };
        chatGPTRequest.SetChatGPTCompletionReq(chatGPTCompletionReq);
        chatGPTRequest.DefaultRequest();
    }

    public void SendSingleChatGPTDialogRequest(string message)
    {
        ChatGPTCompletionReq chatGPTCompletionReq = new ChatGPTCompletionReq()
        {
            model = ChatGPTConstant.ChatGPTCompletionModel,
            temperature = chatGPTAITemperature,
            messages = new List<ChatGPTCompletionMessageInfo>
            {
                new ChatGPTCompletionMessageInfo
                {
                    role = "system",
                    content = chatGPTAIRolePrompt
                },
                new ChatGPTCompletionMessageInfo
                {
                    role = "user",
                    content = message
                }
            }
        };
        GameManager.Instance.SetGameMode(GameModeCode.WaitingServerResponseMode);
        chatGPTRequest.SetChatGPTCompletionReq(chatGPTCompletionReq);
        chatGPTRequest.DefaultRequest();
    }

    public void InitHistoryChatGPTCompletionMessageInfoList()
    {
        historyChatGPTCompletionMessageInfoList.Clear();
        ChatGPTCompletionMessageInfo defaultMessage = new ChatGPTCompletionMessageInfo
        {
            role = "system",
            content = chatGPTAIRolePrompt
        };
        historyChatGPTCompletionMessageInfoList.Add(defaultMessage);
    }

    public void OnChatGPTDialogResponse(string chatGPTCompletionResponseJson)
    {
        ChatGPTCompletionRsp chatGPTCompletionRsp = JsonSerializer.Deserialize<ChatGPTCompletionRsp>(chatGPTCompletionResponseJson);        
        if (chatGPTCompletionRsp.choices.Count > 0)
        {
            string chatGPTResponseStr = chatGPTCompletionRsp.choices[0].message.content;
            dialogWindow.SetDialogAvaterName("ChatGPTResponse");
            dialogWindow.SetDialogText(chatGPTResponseStr);
        }
        GameManager.Instance.SetGameMode(GameModeCode.ChatGPTDialogueMode);
    }
}
