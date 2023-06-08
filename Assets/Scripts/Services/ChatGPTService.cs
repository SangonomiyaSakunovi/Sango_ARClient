using UnityEngine;

//Developer : SangonomiyaSakunovi
//Discription: The NetService.

namespace Assets.Scripts.Services
{
    public class ChatGPTService : MonoBehaviour
    {
        public static ChatGPTService Instance = null;

        public void InitServive()
        {
            Instance = this;
        }
    }
}
