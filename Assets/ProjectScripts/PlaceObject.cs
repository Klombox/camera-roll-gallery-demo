using System.Security.AccessControl;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using EnhancedTouch = UnityEngine.InputSystem.EnhancedTouch;

[RequireComponent (typeof(ARRaycastManager), typeof(ARPlaneManager) )]
public class PlaceObject : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab;  //ref to prefab to spawn
    [SerializeField]
    private int numToSpawn = 4; //number of game objects to spawn

    private ARRaycastManager aRRaycastManager;  //ref to raycast manager
    private ARPlaneManager aRPlaneManager;  //ref to plane manager
    private List<ARRaycastHit> hits = new List<ARRaycastHit>(); //to hold hitResults
    private int numSpawned = 0; //counter variable for the number of objects spawned

    private void Awake(){
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManager = GetComponent<ARPlaneManager>();
    }

    private void OnEnable(){
        EnhancedTouch.TouchSimulation.Enable(); //enables touch simulation in editor (for testing)
        EnhancedTouch.EnhancedTouchSupport.Enable(); //enables EnhancedTouch
        EnhancedTouch.Touch.onFingerDown += FingerDown; //call function that cast Raycast on touch point; sub to event
    }

    private void OnDisable(){
        EnhancedTouch.TouchSimulation.Disable(); //disables touch simulation in editor (for testing)
        EnhancedTouch.EnhancedTouchSupport.Disable(); //disables EnhancedTouch
        EnhancedTouch.Touch.onFingerDown -= FingerDown;
    }

    private void FingerDown(EnhancedTouch.Finger finger){
        if (finger.index != 0) return;

        //cast raycast
        if(aRRaycastManager.Raycast(finger.currentTouch.screenPosition, hits, TrackableType.PlaneWithinPolygon) ){

            //check if the desired number of objects is already spawned
            if (numSpawned >= numToSpawn) {
                return;
            }

            foreach (ARRaycastHit hit in hits)
            {
                Pose pose = hit.pose;
                GameObject obj = Instantiate(prefab, pose.position, pose.rotation);

                //check for certain AR plane (Horizontal,Vertical, etc.)
                if(aRPlaneManager.GetPlane(hit.trackableId).alignment == PlaneAlignment.Vertical) //example was PlaneAlignment.HorizontalUp
                {
                    //rotate obj in direction of position
                    Vector3 position = obj.transform.position;
                    position.y = 0f;
                    Vector3 cameraPosition = Camera.main.transform.position;
                    cameraPosition.y = 0f;
                    Vector3 direction = cameraPosition - position;
                    Quaternion targetRotation = Quaternion.LookRotation(direction);
                    obj.transform.rotation = targetRotation;
                }

                numSpawned++; //increment counter variable

                //exit loop when the desired number of objects is spawned
                if (numSpawned >= numToSpawn) {
                    break;
                }

            }
        }
    }
}
