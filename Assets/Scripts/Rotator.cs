using UnityEngine;
using System.Collections;

public class Rotator : MonoBehaviour {

		void Update() {
		transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime * 4);
		//transform.Rotate(new Vector3(0, Time.deltaTime * 90f,0 ));
	}

}
