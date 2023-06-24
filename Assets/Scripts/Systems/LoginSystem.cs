using SangoARNetProtocol;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: 

public class LoginSystem : BaseSystem
{
    public static LoginSystem Instance = null;
    private LoginRequest loginRequest;
    

    public override void InitSystem()
    {
        base.InitSystem();
        Instance = this;
        loginRequest = GetComponent<LoginRequest>();
    }

    public void EnterLogin()
    {
        //LoadScene Async
        resourceService.AsyncLoadScene(SceneConstant.March7thARScene, () =>
        {
            
        });
        DialogSystem.Instance.EnterDialog();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            string acct = "Root";
            string pass = "root";
            LoginReq loginReq = new()
            {
                Acct = acct,
                Pass = pass
            };
            loginRequest.SetLoginRequest(loginReq);
            loginRequest.OnOperationRequest();
        }
    }

    public void OnOperationResponse(SangoNetMessage sangoNetMessage)
    {
        LoginRsp loginRsp = sangoNetMessage.MessageBody.LoginRsp;
        Debug.Log("��ǰ�û���UidΪ��" + loginRsp.Userinfo.Uid);
        Debug.Log("��ǰ�û����û���Ϊ��" + loginRsp.Userinfo.NickName);
    }
}
