using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: 

public class LoginSystem : BaseSystem
{
    public static LoginSystem Instance = null;

    

    public override void InitSystem()
    {
        base.InitSystem();
        Instance = this;        
    }

    public void EnterLogin()
    {
        //LoadScene Async
        resourceService.AsyncLoadScene(SceneConstant.March7thARScene, () =>
        {
            
        });
        DialogSystem.Instance.EnterDialog();
    }
}
