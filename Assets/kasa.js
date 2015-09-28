#pragma strict

public var timer : float;

function Start () {
	timer = Time.time;
}

function Update () {
	if(Time.time - timer >= 4){
		if(UiController.clear == false){
			Destroy(gameObject);
			if(turnhuusya.openhuusya == false){
				flower.gameover = true;
			}
		}
	}
}