using UnityEngine;
using System.Collections;

public class LoopBugMoving : MonoBehaviour {

	private float initialX;
	private float initialZ;

	void Start(){
		initialX = transform.position.x;
		initialZ = transform.position.z;
	}
	
	// Update is called once per frame
	void Update () {
		if (gameObject.tag == "Worm1") {
			transform.position = new Vector3(transform.position.x, transform.position.y, initialZ + Mathf.PingPong(Time.time, 2.0f));
		}else if (gameObject.tag == "Worm2") {
			transform.position = new Vector3(initialX + Mathf.PingPong(Time.time, 1.5f), transform.position.y, initialZ + Mathf.PingPong(Time.time, 1.5f));
		}else if (gameObject.tag == "Worm3") {
			transform.position = new Vector3(initialX + Mathf.PingPong(Time.time, 3.0f), transform.position.y, initialZ - Mathf.PingPong(Time.time, 3.0f));
		}else if (gameObject.tag == "Enzyme Rotative") {
			transform.Rotate(new Vector3(0, Time.deltaTime * 120f, 0));
		}
	}
}
