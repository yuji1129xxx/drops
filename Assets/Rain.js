#pragma strict

public var timer : float;

function Start () {
}

function Update () {

}

function OnCollisionEnter (obj :Collision) {
	timer = Time.time;
	if(obj.gameObject.name == "Floor"){
		Destroy(gameObject);
	}
	else if(obj.gameObject.name == "house1"){
		Destroy(gameObject);
	}
	else if(obj.gameObject.name == "Flower"){
		UiController.clear = true;
		Destroy(gameObject);
	}
	else if(obj.gameObject.name == "Flower2"){
		UiController.clear = true;
		Destroy(gameObject);
	}
//	else if(obj.gameObject.name == "box"){
//		Destroy(gameObject);
//	}
	else{
		gameObject.transform.localScale = Vector3(0.07, 0.07, 0.07);
		if(obj.gameObject.name == "house4"){
//			if(Time.time - timer <= 0.1){
				Destroy(gameObject);
//			}
		}
	}
}
