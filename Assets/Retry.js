#pragma strict

public var controller : RetryController;

function Start () {

}

function Update () {

}

function click () {
	if (Application.loadedLevelName == "Main") {
	    Application.LoadLevel("Main");
		controller.text.gameObject.SetActive(false);
		flower.gameover = false;
	}
	if (Application.loadedLevelName == "Stage2") {
	    Application.LoadLevel("Stage2");
		controller.text.gameObject.SetActive(false);
		flower.gameover = false;
	}	
}

function next () {
	if (Application.loadedLevelName == "Main") {
	    Application.LoadLevel("Stage2");
		controller.text.gameObject.SetActive(false);
		UiController.clear = false;
		flower.gameover = false;
	}
//	if (Application.loadedLevelName == "Stage2") {
//	    Application.LoadLevel("Stage2");
//		controller.text.gameObject.SetActive(false);
//		flower.gameover = false;
//	}	
}

function startgame () {
	Debug.Log("hello");
    Application.LoadLevel("Main");
}

