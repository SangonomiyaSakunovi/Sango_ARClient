using Assets.Scripts.Services;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: GameRoot, use monoInstance as Tool for other cs to call

public class SangoRoot : MonoBehaviour
{
    public static SangoRoot Instance = null;



    void Start()
    {
        Instance = this;
        DontDestroyOnLoad(this.gameObject);
        CleanUIWindow();
        InitRoot();
    }

    private void CleanUIWindow()
    {
        Transform canvas = transform.Find("Canvas");
        for (int i = 0; i < canvas.childCount; i++)
        {
            canvas.GetChild(i).gameObject.SetActive(false);
        }
    }

    private void InitRoot()
    {
        InitService();
        InitManager();
        InitRequest();
        InitEvent();
        InitSystem();
        InitCache();
        LoginSystem.Instance.EnterLogin();
    }

    private void InitService()
    {
        NetService netService = GetComponent<NetService>();
        netService.InitService();
        ResourceService resourceService = GetComponent<ResourceService>();
        resourceService.InitService();
        AudioService audioService = GetComponent<AudioService>();
        audioService.InitServive();
        ChatGPTService chatGPTService = GetComponent<ChatGPTService>();
        chatGPTService.InitServive();
    }

    private void InitManager()
    {
        GameManager gameManager = GetComponent<GameManager>();
        gameManager.InitManager();
    }

    private void InitRequest()
    {
        LoginRequest loginRequest = GetComponent<LoginRequest>();
        loginRequest.InitRequset();
        DialogRequest dialogRequest = GetComponent<DialogRequest>();
        dialogRequest.InitRequset();
        ChatGPTRequest chatGPTRequest = GetComponent<ChatGPTRequest>();
        chatGPTRequest.InitRequset();
    }

    private void InitEvent()
    {

    }

    private void InitCache()
    {

    }

    private void InitSystem()
    {
        LoginSystem loginSystem = GetComponent<LoginSystem>();
        loginSystem.InitSystem();
        DialogSystem dialogSystem = GetComponent<DialogSystem>();
        dialogSystem.InitSystem();

    }

    private void OnApplicationQuit()
    {
        NetService.Instance.CloseClientInstance();
    }
}
