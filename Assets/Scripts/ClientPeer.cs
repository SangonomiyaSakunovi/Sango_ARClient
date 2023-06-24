using ProtoBuf;
using SangoARNetProtocol;
using SangoIOCPNet;
using System;
using System.IO;
using UnityEngine;

public class ClientPeer : IClientPeer
{
    protected override void OnConnect()
    {
        Debug.Log("已连接服务器");
    }

    protected override void OnDisconnect()
    {
        
    }

    protected override void OnRecieveMessage(byte[] byteMessages)
    {
        Debug.Log("收到一条服务器消息");
        using (MemoryStream ms = new MemoryStream(byteMessages))
        {
            SangoNetMessage sangoNetMessage = Serializer.Deserialize<SangoNetMessage>(ms);
            switch (sangoNetMessage.MessageHead.MessageCommand)
            {
                case MessageCommand.OperationResponse:
                    {
                        NetService.Instance.OnOperationResponse(sangoNetMessage);
                    }
                    break;
                default:
                    {
                        Debug.Log("找不到对应的MessageCommand");
                    }
                    break;
            }
        }
    }

    public void SendOperationRequest(OperationCode operationCode, MessageBody messageBody)
    {
        MessageHead head = new()
        {
            OperationCode = operationCode,
            MessageCommand = MessageCommand.OperationRequest
        };
        SangoNetMessage sangoNetMessage = new()
        {
            MessageHead = head,
            MessageBody = messageBody
        };
        SendData(sangoNetMessage);
    }

    private void SendData(SangoNetMessage sangoNetMessage)
    {
        using (MemoryStream ms = new())
        {
            Serializer.Serialize(ms, sangoNetMessage);
            byte[] byteMessage = new byte[ms.Length];
            Buffer.BlockCopy(ms.GetBuffer(), 0, byteMessage, 0, (int)ms.Length);
            SendMessage(byteMessage);
        }
    }
}
