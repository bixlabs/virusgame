using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class HomeCameraController : MonoBehaviour {

	void startGame(){
		SceneManager.LoadScene ("Game");
	}
}
