#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Data {
	vector<string> database;	//파일의 모든 단어를 저장할 database
	
public:
	Data();						//파일에서 단어를 불러와 database에 저장하는 생성자
	string data(int i);				//벡터에서 랜덤 단어를 리턴하는 함수
	int size() { return database.size(); }
};

Data::Data(){
	ifstream fin("word.txt");
	string line;
	while (getline(fin, line)) {
		database.push_back(line);
	}
	fin.close();
}

string Data::data(int i) {
	return database.at(i);
}