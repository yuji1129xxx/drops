#pragma strict

import UnityEngine.UI;

public var text : Image;

function Start () {
	text.gameObject.SetActive(false);
}

function Update () {
	if(flower.gameover){
		if(turnhuusya.openhuusya == false){
			text.gameObject.SetActive(true);
		}
	}
}
