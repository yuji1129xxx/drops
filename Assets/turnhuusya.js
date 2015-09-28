#pragma strict

public var interval : float = 0.1;
private var time : float;
public static var huusya : boolean;
public static var openhuusya : boolean;

function Start () {

}

function Update () {
	time += Time.deltaTime;

	if(huusya == true){
		if(time >= interval)
		{
			time = 0;
				gameObject.transform.localRotation.z += -0.01;
		}
	}
}

function OnCollisionEnter (obj :Collision) {
//	Debug.Log("hello" + obj.gameObject.name);
	if(obj.gameObject.name == "Rain(Clone)"){
		huusya = true;
		openhuusya = true;
	}
}
