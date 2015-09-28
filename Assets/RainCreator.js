#pragma strict

public var obj : GameObject;
public var interval : float = 0.05;
private var time : float;

function Start(){

}

function Update () {
	time += Time.deltaTime;
//	if (Application.loadedLevelName != "First") {
	    if(time >= interval)
		{
			time = 0;
			var rain = GameObject.Instantiate(obj)as GameObject;
			rain.transform.localPosition = Vector3(Random.Range(-3.5, 3.5), 18, -1);
		}
//	}
}
