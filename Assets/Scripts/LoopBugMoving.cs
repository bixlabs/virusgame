using UnityEngine;
using System.Collections;

public class LoopBugMoving : MonoBehaviour {

	private float initialX;
	private float initialY;

	void Start(){
		initialX = transform.position.x;
		initialY = transform.position.y;
	}

	// Update is called once per frame
	void Update () {
		if (gameObject.tag == "Worm1") {
			//transform.position = new Vector3(transform.position.x, initialY + Mathf.PingPong(Time.time, 1.0f), transform.position.z);
			var move= new Vector3(transform.position.x, initialY + Mathf.PingPong(Time.time, 1.4f), transform.position.z);
			float step = 0.8f * Time.deltaTime;
			transform.position = Vector3.MoveTowards(transform.position, move, step);
		}else if (gameObject.tag == "Worm2") {
			//transform.position = new Vector3(initialX - Mathf.PingPong(Time.time, 0.70f), initialY + Mathf.PingPong(Time.time, 0.70f), transform.position.z) * 0.8f;
		    var move= new Vector3(initialX - Mathf.PingPong(Time.time, 1.5f), initialY + Mathf.PingPong(Time.time, 1.5f), transform.position.z);
			float step = 0.8f * Time.deltaTime;
			transform.position = Vector3.MoveTowards(transform.position, move, step);
		}
	}
}
	