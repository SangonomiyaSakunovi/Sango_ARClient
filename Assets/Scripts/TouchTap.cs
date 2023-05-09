using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TouchTap : MonoBehaviour
{
    public Ray Ray { get; private set; }
    private float touchTime;
    private bool newTouch = false;

    private float xSpeed = 100f;
    private Vector2 oldPos1;
    private Vector2 oldPos2;

    // Update is called once per frame
    void Update()
    {       
       
    }

    private bool IsEnlarge(Vector2 oldPos1, Vector2 oldPos2, Vector2 newPos1, Vector2 newPos2)
    {
        float oldDis = Vector2.Distance(oldPos1, oldPos2);
        float newDis = Vector2.Distance(newPos1, newPos2);
        if (newDis > oldDis)
        {
            return true;
        }
        else { return false; }
    }

    private void PinToEnLarge()
    {
        if (Input.touchCount == 2)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Moved || Input.GetTouch(1).phase == TouchPhase.Moved)
            {
                Vector2 newPos1 = Input.GetTouch(0).position;
                Vector2 newPos2 = Input.GetTouch(1).position;
                float oldScale = transform.localScale.x;
                float newScale;
                if (IsEnlarge(oldPos1,oldPos2,newPos1,newPos2))
                {
                    newScale = oldScale * 1.025f;                    
                }
                else
                {
                    newScale = oldScale / 1.025f;
                }
                transform.localScale = new Vector3(newScale, newScale, newScale);
                oldPos1 = newPos1;
                oldPos2 = newPos2;
            }
        }
    }

    private void TouchToDestroy()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(Ray, out hit))
            {
                if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    if (Input.GetTouch(0).tapCount == 2)
                    {
                        Destroy(hit.collider.gameObject);
                    }
                }
            }
        }
    }

    private void DoubleTouchToDestroy()
    {
        if (Input.GetMouseButton(0))
        {
            Ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(Ray, out hit))
            {
                if (Input.touchCount == 1)
                {
                    Touch touch = Input.GetTouch(0);
                    if (touch.phase == TouchPhase.Began)
                    {
                        newTouch = true;
                        touchTime = Time.time;
                    }
                    else if (touch.phase == TouchPhase.Stationary)
                    {
                        if (newTouch && Time.time - touchTime > 1f)
                        {
                            newTouch = false;
                            Destroy(hit.collider.gameObject);
                        }
                    }
                    else
                    {
                        newTouch = false;
                    }
                }
            }
        }
    }

    private void SlideToRotate()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(Ray, out hit))
            {
                if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved)
                {
                    transform.Rotate(Vector3.up * Input.GetAxis("Mouse X") * -xSpeed * Time.deltaTime, Space.World);
                }
            }
        }
    }
}
