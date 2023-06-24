using SangoARNetProtocol;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: 

public class DialogRequest : BaseRequest
{
    public override void InitRequset()
    {
        base.InitRequset();
        
    }

    public override void OnOperationRequest()
    {
        throw new System.NotImplementedException();
    }

    public override void OnOperationResponse(SangoNetMessage sangoNetMessage)
    {
        throw new System.NotImplementedException();
    }
}
