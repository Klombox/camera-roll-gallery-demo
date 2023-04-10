using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

namespace Kakera
{
    public class PickerController : MonoBehaviour
    {
        [SerializeField]
        public Unimgpicker imagePicker; //was private

        [SerializeField]
        public MeshRenderer imageRenderer; //was private

        private int[] sizes = { 1024, 256, 16 };

        void Awake()
        {
            imagePicker.Completed += (string path) =>
            { StartCoroutine(LoadImage(path, imageRenderer)); };
        }

        public void OnPressShowPicker()
        {
            imagePicker.Show("Select Image", "unimgpicker");
        }

        public IEnumerator LoadImage(string path, MeshRenderer output) //was private
        {
            var url = "file://" + path;
            var unityWebRequestTexture = UnityWebRequestTexture.GetTexture(url);
            yield return unityWebRequestTexture.SendWebRequest();

            var texture = ((DownloadHandlerTexture)unityWebRequestTexture.downloadHandler).texture;
            if (texture == null)
            {
                Debug.LogError("Failed to load texture url:" + url);
            }
            else //adding a log stmt for successful loads
            {
                Debug.Log("Texture loaded successfully from url:" + url);
            }

            output.material.mainTexture = texture;
        }
    }
}