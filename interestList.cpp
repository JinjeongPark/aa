#include "bookclass.h"

void Book::addtolist() {//����ڰ� ���ϴ� å�� ������ �Է¹ް� �̸� ��Ͽ� �߰�
	cout << "���ɸ�Ͽ� �߰��� å�� ������ �Է��Ͻÿ�:";
	cin >> title;
	Book::bookList.push_back(title);
	cout << Book::bookList;
}