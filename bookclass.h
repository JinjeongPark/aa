#pragma once
#include<iostream>
#include <string>
#include<vector>
#include <list>
using namespace std;

class Book {//book 클래스 생성 및 멤버 변수 선언
public:
	int i;
	string title;
	string author;
	string publisher;
	string genre;
	void addtolist();
	vector <string> bookList;
};
void Book() {
	int i = 0;
}