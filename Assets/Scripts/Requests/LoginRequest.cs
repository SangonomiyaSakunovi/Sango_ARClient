using SangoARNetProtocol;
using UnityEngine;

public class LoginRequest : BaseRequest
{
    [HideInInspector]
    public LoginReq LoginReq { get; private set; }

    public override void InitRequset()
    {
        base.InitRequset();
        NetOpCode = OperationCode.Login;
    }

    public override void OnOperationRequest()
    {
        MessageBody body = new()
        {
            LoginReq = LoginReq
        };
        netService.SendOperationRequest(NetOpCode, body);
    }

    public override void OnOperationResponse(SangoNetMessage sangoNetMessage)
    {
        LoginSystem.Instance.OnOperationResponse(sangoNetMessage);
    }

    public void SetLoginRequest(LoginReq loginReq)
    {
        LoginReq = loginReq;
    }
}
