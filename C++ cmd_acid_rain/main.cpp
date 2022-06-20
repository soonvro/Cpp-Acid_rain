#include <iostream>
#include <string>
#include <windows.h>
#include "Cursor.h"
#include "Data.h"
#include "Scene.h"
#include "Rain.h"
#include "Engine.h"
using namespace std;

int main() {
	system("mode con: cols=150 lines=50");
	Cursor::hideCursor();

	Engine engine;				//엔진 객체 생성

	while(1) {
		Scene::sceneBox();			//첫번째 화면
		Scene::sceneTitle();
		Scene::scene1();
		system("cls");

		Scene::sceneBox();			//두번째 화면
		Scene::scene2();
		system("cls");

		Scene::sceneBox2();			//게임 화면
		engine.startGame();
	}

}