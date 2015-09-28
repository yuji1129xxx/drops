#pragma strict

public var interval : float = 0.1;
private var time : float;

function Start () {

}

function Update () {
	time += Time.deltaTime;
	
	if(turnhuusya.openhuusya == true){
		if(time >= interval)
		{
			time = 0;
			if(gameObject.transform.localRotation.z > 0){
				gameObject.transform.localRotation.z += -0.006;
			}
		}
	}
}