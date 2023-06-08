using TMPro;
using UnityEngine;
using UnityEngine.UI;

//Developer : SangonomiyaSakunovi
//Discription: 

public class DialogWindow : BaseWindow
{
    public TMP_Text dialogAvaterName;
    public TMP_Text dialogText;
    public Image dialogAvaterImage;
    public Button nextButton;
    public TMP_InputField dialogInputField;

    private ChatObject chatObject;

    protected override void InitWindow()
    {
        base.InitWindow();
        chatObject = ChatObject.ChatGPT;
    }

    public void SetDialogText(string text)
    {
        SetText(dialogText, text);
    }

    public void SetDialogAvaterName(string name)
    {
        SetText(dialogAvaterName, name);
    }

    public void OnNextButtonClick()
    {
        if (GameManager.Instance.GameMode == GameModeCode.WaitingServerResponseMode)
        {
            SetDialogText("�Ե�һ����Ŷ���һ�û�з�Ӧ������");
        }
        else
        {
            switch (chatObject)
            {
                case ChatObject.ChatGPT:
                    SetDialogAvaterName("ɺ������Ŀ��");
                    SetDialogText("");
                    dialogInputField.text = "";
                    chatObject = ChatObject.Player;
                    SetInputField(true);
                    break;
                case ChatObject.Player:
                    SetInputField(false);
                    chatObject = ChatObject.ChatGPT;
                    SetChatGPTDialog();
                    break;
            }
        }        
    }

    private void SetInputField(bool bo)
    {
        SetActive(dialogInputField.gameObject, bo);
    }

    private void SetChatGPTDialog()
    {
        DialogSystem.Instance.SendContinuesChatGPTDialogRequest(dialogInputField.text);
    }

    private enum ChatObject
    {
        Player,
        ChatGPT,
    }
}
