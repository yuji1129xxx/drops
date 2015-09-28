#pragma strict

public static var gameover : boolean;

function Start () {

}

function Update () {
	if(gameover){
		Destroy(gameObject);
	}
}
