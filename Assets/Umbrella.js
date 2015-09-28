#pragma strict

public var prefab : GameObject;
public var Umbrella : boolean;

function Update () {
	if (Application.loadedLevelName != "First") {
	    if (Umbrella == false){
			if (Input.GetMouseButtonDown(0))
			{
	//			UiController.clear = true;
				var pos = Input.mousePosition;
				var newPos = Camera.main.ScreenToWorldPoint(pos);
				newPos.z = 1.5;
				var kasa = GameObject.Instantiate(prefab, newPos, Quaternion.identity)as GameObject;
				Umbrella = true;
			}
		}
	}
}
