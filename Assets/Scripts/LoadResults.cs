using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LoadResults : MonoBehaviour {

	public Text top1;
	public Text top2;
	public Text top3;
	public Text top4;
	public Text top5;

	// Use this for initialization
	void Start () {
		SaveLoad.Load ();
		top1.text = SaveLoad.gameData.ranking [0].ToString ();

		if (SaveLoad.gameData.ranking.Count > 1) {
			top2.text = SaveLoad.gameData.ranking [1].ToString ();
		}
		if (SaveLoad.gameData.ranking.Count > 2) {
			top3.text = SaveLoad.gameData.ranking [2].ToString ();
		}
		if (SaveLoad.gameData.ranking.Count > 3) {
			top4.text = SaveLoad.gameData.ranking [3].ToString ();
		}
		if (SaveLoad.gameData.ranking.Count > 4) {
			top5.text = SaveLoad.gameData.ranking [4].ToString ();
		}
			
	}

}
