#pragma once
#include <iostream>
#include <string>
#include "Cursor.h"
using namespace std;

class Scene {
public:
	static int difficulty;			//난이도 변수
	static void sceneBox();			//화면 틀 출력 
	static void sceneTitle();		//제목 출력
	static void scene1();			//화면 1 문구 출력
	static void scene2();			//화면 2 문구 출력 및 난이도 선택
	static void sceneBox2();		//게임 화면 틀 출력
	static void endingScene1();
	static void endingScene2();
};

int Scene::difficulty = 1;

void Scene::sceneBox() {
	Cursor::gotoxy(25, 5);
	for (int i = 0; i < 51; i++) {
		cout << "■";
	}
	for (int i = 6; i < 30; i++) {
		Cursor::gotoxy(25, i);
		cout << "■";
	}
	for (int i = 6; i < 30; i++) {
		Cursor::gotoxy(125, i);
		cout << "■";
	}
	Cursor::gotoxy(25, 30);
	for (int i = 0; i < 51; i++) {
		cout << "■";
	}
}

void Scene::sceneTitle() {
	Cursor::gotoxy(37, 11);
	cout << "      ######        #           #                #   #     #     #          # " << endl;
	Cursor::gotoxy(37, 12);
	cout << "    #               #           #               # #  ##   # #   ##  #    #  #  " << endl;
	Cursor::gotoxy(37, 13);
	cout << "  #              #######     #######           #   # #   #   #   #  ######  #  " << endl;
	Cursor::gotoxy(37, 14);
	cout << "   #                #           #                              #    #    #  #  " << endl;
	Cursor::gotoxy(37, 15);
	cout << "    #               #           #                  #          # #   ######  #  " << endl;
	Cursor::gotoxy(37, 16);
	cout << "      ######                                       ###         #            #  " << endl;
}

void Scene::scene1() {
	Cursor::gotoxy(41, 23);
	cout << "빠른 C++ 프로그래밍을 위한 타자연습게임 <C++ 산성비>에 오신걸 환영합니다.";
	Cursor::gotoxy(41, 25);
	cout << "시작하려면 아무키나 누르세요";
	system("pause>null");
}

void Scene::scene2() {
	Cursor::gotoxy(63, 19);
	cout << "원하는 난이도를 고르세요.";
	Cursor::gotoxy(63, 21);
	cout << "1. 초급   2. 중급   3. 고급";
	int tmp;
	
	for (;;) {
		Cursor::gotoxy(76, 25);
		cin >> tmp;
		if (tmp < 4) {
			if (0 < tmp) { 
				difficulty = tmp;
				break; 
			}
			else {
				Cursor::gotoxy(76, 25);
				cout << "                 ";
				Cursor::gotoxy(76, 25);
			}
		}
		else {
			Cursor::gotoxy(76, 25);
			cout << "                 ";
			Cursor::gotoxy(76, 25);
		}
	}
}

void Scene::sceneBox2() {
	for (int i = 0; i < 30; i++) {
		Cursor::gotoxy(25, i);
		cout << "■";
	}
	for (int i = 0; i < 30; i++) {
		Cursor::gotoxy(125, i);
		cout << "■";
	}
	Cursor::gotoxy(25, 30);
	for (int i = 0; i < 51; i++) {
		cout << "■";
	}
	Cursor::gotoxy(27, 23);
	for (int i = 0; i < 98; i++) {
		cout << "-";
	}
	Cursor::gotoxy(65, 29);
	for (int i = 0; i < 21; i++) {
		cout << "-";
	}
	Cursor::gotoxy(5, 4);
	cout << "Score : " << '0';
	Cursor::gotoxy(5, 6);
	cout << "Life : " << "100";
}

void Scene::endingScene1() {
	sceneBox();
	Cursor::gotoxy(60, 15);
	cout << "c++을 정말 잘하는군요? 축하드립니다!";
}

void Scene::endingScene2() {
	sceneBox();
	Cursor::gotoxy(65, 15);
	cout << "좀 더 연습이 필요해요!";
}