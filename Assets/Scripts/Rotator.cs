using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate (new Vector3(0, 0 , Time.deltaTime * 90f * 2));
		//transform.Rotate(new Vector3(0, Time.deltaTime * 90f,0 ));

		//Quaternion rotation = Quaternion.LookRotation(new Vector3(0, Time.deltaTime * 90f , 0));
		//transform.rotation = rotation;

		//transform.LookAt (transform,Vector3.forward);
	}
}
