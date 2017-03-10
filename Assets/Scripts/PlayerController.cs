using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using System;

public class PlayerController : MonoBehaviour {

	public float penaltySeconds = 2.5f;
	public float reviveSeconds = 1.0f;
	public float speed;
	public Text timerText;
	public Text counterText;

	private Rigidbody rb;
	private int count;
	private DateTime start;
	private bool fatCollision = false;
	private bool restart = false;


	void Start () {
		rb = GetComponent<Rigidbody> ();
		count = 0;
		SetCountText ();
		timerText.text = "00.00";
		counterText.text = "0";
		start = DateTime.Now;
	}

	void FixedUpdate () {

		TimeSpan timer = DateTime.Now - start;
		timerText.text = string.Format("{0:00.00}", timer.TotalSeconds);

		// Real device
		float moveHorizontal = Input.acceleration.x * 2;
		float moveVertical = Input.acceleration.y * 2;

		// Simulator
		//float moveHorizontal = Input.GetAxis ("Horizontal") * 2;
		//float moveVertical = Input.GetAxis ("Vertical") * 2;

		Vector3 movement = new Vector3 (moveHorizontal, moveVertical, 0.0f);

		if (fatCollision) {
			rb.angularVelocity = Vector3.zero;
			rb.velocity = Vector3.zero;
			penaltySeconds -= Time.deltaTime;
			if (penaltySeconds <= 0.0) {
				fatCollision = false;
			}
		} else {
			penaltySeconds = 2.5f;
			rb.AddForce (movement * speed);
		}

		if (restart) {
			reviveSeconds -= Time.deltaTime;
			if (reviveSeconds <= 0.0) {
				restart = false;
			} else {
				//Debug.Log (reviveSeconds / 10);
				if ((reviveSeconds > 0 && reviveSeconds < 0.1) || (reviveSeconds > 0.2 && reviveSeconds < 0.3) || (reviveSeconds > 0.4 && reviveSeconds < 0.5)
					|| (reviveSeconds > 0.6 && reviveSeconds < 0.7) || (reviveSeconds > 0.8 && reviveSeconds < 0.9)) {
					gameObject.GetComponent<Renderer> ().enabled = true;	
				} else {
					gameObject.GetComponent<Renderer>().enabled = false;
				}
			}
		} else {
			reviveSeconds = 1.0f;
		}

	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag ("Antibody Rotative")) {
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText ();
		} else if (other.gameObject.CompareTag ("Fat")) {
			fatCollision = true;
		}else if(other.gameObject.CompareTag ("Worm1") || other.gameObject.CompareTag ("Worm2")){
			transform.position = new Vector3 (0.29f, - 0.46f, - 0.25f);
			rb.angularVelocity = Vector3.zero;
			rb.velocity = Vector3.zero;
			fatCollision = false;
			restart = true;
			penaltySeconds = 2.5f;
			GameObject[] gos;

			gos = Resources.FindObjectsOfTypeAll<GameObject>();

			foreach (GameObject go in gos) {
				if(!go.activeSelf && go.tag == "Antibody Rotative"){
					go.SetActive (true);
					count = 0;
					SetCountText ();
				}

			}
		}
	}

	void OnCollisionEnter(Collision collision) {
		if (collision.gameObject.CompareTag ("Fat")) {
			fatCollision = true;
			rb.angularVelocity = Vector3.zero;
			rb.velocity = Vector3.zero;
		}
	}

	void SetCountText () {
		counterText.text = count.ToString ();
		if (count >= 2) {
			// Win
			double newRanking = Convert.ToDouble (timerText.text);
			SaveLoad.gameData.updateRanking (newRanking);
			SaveLoad.Save ();
			SceneManager.LoadScene ("Results");
		}
	}

}
