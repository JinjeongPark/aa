#pragma once
#include<iostream>
#include <string>
#include<vector>
#include <list>
using namespace std;

class Book {//book Ŭ���� ���� �� ��� ���� ����
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