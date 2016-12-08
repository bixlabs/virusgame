using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float penaltySeconds = 2.5f;
	public float speed;
	public Text countText;
	public Text winText;

	private Rigidbody rb;
	private int count;
	private bool fatCollision = false;

	void Start () {
		rb = GetComponent<Rigidbody> ();
		count = 0;
		SetCountText ();
		winText.text = "";
	}
		
	void FixedUpdate () {
		//float moveHorizontal = Input.acceleration.x * 2;
		//float moveVertical = Input.acceleration.y * 2;

		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		if (fatCollision) {
			rb.angularVelocity = Vector3.zero;
			rb.velocity = Vector3.zero;
			penaltySeconds -= Time.deltaTime;
			if (penaltySeconds <= 0.0) {
				fatCollision = false;
			}
		} else {
			penaltySeconds = 2.5f;
			rb.AddForce (movement * speed * 2);
		}
	
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag ("Pick Up")) {
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText ();
		} else if (other.gameObject.CompareTag ("Antibody Rotative")) {
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText ();
		} else if (other.gameObject.CompareTag ("Fat")) {
			fatCollision = true;
		}else if(other.gameObject.CompareTag ("Worm1") || other.gameObject.CompareTag ("Worm2") || other.gameObject.CompareTag ("Worm3") || other.gameObject.CompareTag ("Enzyme Rotative")){
			transform.position = new Vector3 (0.0f, 0.5f, 0.0f);
			rb.angularVelocity = Vector3.zero;
			rb.velocity = Vector3.zero;
			fatCollision = false;
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
		countText.text = "Count: " + count.ToString ();
		if (count >= 9) {
			winText.text = "You Win!";
		}
	}

}