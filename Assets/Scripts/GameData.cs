using UnityEngine;
using System.Collections;
using System;

[System.Serializable]
public class GameData { 

	//public double[] ranking = new double[];
	public ArrayList ranking = new ArrayList();

	public void updateRanking(double newRecord){


		//ranking [ranking.Length] = newRecord;
		//Array.Sort (ranking);
		ranking.Add(newRecord);
		ranking.Sort ();

		if (ranking.Count > 5) {
			ArrayList top5 = new ArrayList();
			for (int i = 0; i < ranking.Count; i++) {
				//top5 [i] = ranking [i];
				top5.Add(ranking.ToArray()[i]);
			}
			ranking = top5;
		}

	}

}
