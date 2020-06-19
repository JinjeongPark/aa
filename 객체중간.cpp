#include <iostream>
#include<string>
#include <fstream>
#include "bookManage.h"
using namespace std;

int main(void) {
	const char* s = "C:\Users\Park Jin Se\Desktop\2020";
	vector<string> v, searchHistory;
	string word;
	ifstream fsr(s, ios::in | ios::binary);
	ifstream fsw(s, ios::out | ios::binary);
	if (fsr.is_open()) {
		cout << "파일을 열 수 없습니다.";
		return 0;
	}
	if (fsw.is_open()) {
		cout << "파일을 열 수 없습니다.";
		return 0;
	}
	int menu;
	cout << "원하는 메뉴를 입력하시오. 1. 제목검색, 2.주제별 검색, 3.도서 관리, 4.도서 이용 내역, 5.관심 도서목록, 9.종료";
	cin >> menu;
	while (1) {
		if (menu == 1 | menu==2) {
			fileRead(fsr, v);
			Search(v, word);
			searchHistory.push_back(word);
		}
		else if (menu == 3) {
			int menu2;
			cout << "1. 도서 추가, 2. 도서 삭제";
			cin >> menu2;
			if (menu2 == 1)
				bookManage::insertBook();
				
			else if (menu2 == 2)
				bookManage::deleteBook();
		}
		else if (menu == 4) {
			int i;
			for (i = 0; i < searchHistory.size(); i++);
				cout << searchHistory[i] << endl;
		}
		else if (menu == 5) {
			Book::addtolist();
		}
		else if (menu == 9) {
			cout << "프로그램을 종료합니다.";
			break;
		}
		else
			cout << "잘못된 입력입니다.";
	}

	fsr.close();
	fsw.close();
}