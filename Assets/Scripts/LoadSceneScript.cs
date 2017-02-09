using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LoadSceneScript : MonoBehaviour {

	public void startGame(){
		SceneManager.LoadScene ("Game");
	}

}
