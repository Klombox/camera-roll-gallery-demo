using System.Security.AccessControl;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using EnhancedTouch = UnityEngine.InputSystem.EnhancedTouch;
using Kakera;

[RequireComponent (typeof(ARRaycastManager), typeof(ARPlaneManager) )]
public class PlaceObjectModified : MonoBehaviour
{
    [SerializeField]
    private GameObject prefab; //ref to prefab to spawn
    [SerializeField]
    private int numToSpawn = 4; //number of game objects to spawn
    [SerializeField]
    private Canvas canvas; // reference to the canvas object
    [SerializeField]
    private GameObject buttonPrefab; // reference to the button prefab
    private GameObject getImageButton;
    public PickerController pickerController; //ref to PickerController prefab

    private ARRaycastManager aRRaycastManager; //ref to raycast manager
    private ARPlaneManager aRPlaneManager; //ref to plane manager
    private List<ARRaycastHit> hits = new List<ARRaycastHit>(); //to hold hitResults
    private int numSpawned = 0; //variable for the number of objects spawned
    private Vector3 cameraPosition; //ref to position of phone camera

    private void Awake(){
        aRRaycastManager = GetComponent<ARRaycastManager>();
        aRPlaneManager = GetComponent<ARPlaneManager>();
        cameraPosition = Camera.main.transform.position; //cached camera position
    }

    private void OnEnable(){
        EnhancedTouch.TouchSimulation.Enable(); //enables touch simulation in editor (for testing)
        EnhancedTouch.EnhancedTouchSupport.Enable(); //enables EnhancedTouch
        EnhancedTouch.Touch.onFingerDown += FingerDown; //call function that cast Raycast on touch point; sub to event
    }

    private void OnDisable(){
        EnhancedTouch.TouchSimulation.Disable(); //disables touch simulation in editor (for testing)
        EnhancedTouch.EnhancedTouchSupport.Disable(); //disables EnhancedTouch
        EnhancedTouch.Touch.onFingerDown -= FingerDown; //unsubs to event
    }

    //function to check the fingers touching phone screen (only one finger)
    private void FingerDown(EnhancedTouch.Finger finger)
    {
        if (finger.index != 0) return;
        SpawnObjects(finger.currentTouch.screenPosition); //ref to spawning function
    }

    //function to spawn objects
    private void SpawnObjects(Vector2 touchPosition)
    {
        if (getImageButton != null && getImageButton.activeInHierarchy)
        {
            return;
        }
        if(aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            //check if the desired number of objects is already spawned
            if (numSpawned >= numToSpawn) {
                return;
            }

            //foreach loop to iterate through hits
            foreach (ARRaycastHit hit in hits) {
                Pose pose = hit.pose;
                GameObject obj = Instantiate(prefab, pose.position, pose.rotation);

                //reference to the plane on the live gameobject meshRenderer
                MeshRenderer liveMeshRenderer = obj.GetComponent<MeshRenderer>();

                //reference to scene PickerController in this script
                GameObject.Find("PickerController").GetComponent<PickerController>().imageRenderer = liveMeshRenderer;

                RotateObjectOnPlane(obj, hit.trackableId); //ref to rotating function

                // instantiate the button prefab and set its parent to the canvas
                if (getImageButton == null)
                {
                    getImageButton = Instantiate(buttonPrefab, canvas.transform);
                }

                getImageButton.SetActive(true);
                getImageButton.transform.localPosition = Vector3.zero;
                getImageButton.transform.localScale = Vector3.one;

                // add an event listener to the button that destroys it when clicked
                Button buttonComponent = getImageButton.GetComponent<Button>();
                buttonComponent.onClick.AddListener(() =>
                {
                    pickerController.LoadImage("path/to/image.jpg", liveMeshRenderer);
                    getImageButton.SetActive(false);
                });

                numSpawned++; //increment counter variable

                //exit loop when the desired number of objects is spawned
                if (numSpawned >= numToSpawn) {
                    break;
                }
            }
        }
    }

    //function for rotating object on plane
    private void RotateObjectOnPlane(GameObject obj, TrackableId trackableId)
    {
        ARPlane plane = aRPlaneManager.GetPlane(trackableId);
        if (plane.alignment == PlaneAlignment.Vertical)
        {
            Vector3 position = obj.transform.position;
            position.y = 0f;
            Vector3 direction = cameraPosition - position;
            Quaternion targetRotation = Quaternion.LookRotation(direction);
            obj.transform.rotation = targetRotation;
        }
    }
}
