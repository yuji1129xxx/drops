#pragma strict

import UnityEngine.UI;

public var text : Image;
public static var clear : boolean;

function Start () {
	text.enabled = false;
}

function Update () {
	if(clear){
		text.enabled = true;
	}
}
