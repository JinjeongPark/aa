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
		cout << "������ �� �� �����ϴ�.";
		return 0;
	}
	if (fsw.is_open()) {
		cout << "������ �� �� �����ϴ�.";
		return 0;
	}
	int menu;
	cout << "���ϴ� �޴��� �Է��Ͻÿ�. 1. ����˻�, 2.������ �˻�, 3.���� ����, 4.���� �̿� ����, 5.���� �������, 9.����";
	cin >> menu;
	while (1) {
		if (menu == 1 | menu==2) {
			fileRead(fsr, v);
			Search(v, word);
			searchHistory.push_back(word);
		}
		else if (menu == 3) {
			int menu2;
			cout << "1. ���� �߰�, 2. ���� ����";
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
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		else
			cout << "�߸��� �Է��Դϴ�.";
	}

	fsr.close();
	fsw.close();
}