#include<iostream>
#include <string>
#include <vector>
#include "bookclass.h"
using namespace std;

class bookManage : public Book {//bookŬ������ public���� ����ϴ� bookManageŬ���� ���� �� ��� ����, ��� �Լ� ����
public:
	void insertBook();
	void deleteBook();
};
//��� �Լ� ����
void bookManage::insertBook() {//����ڰ� ���Ͽ� �߰��ϱ� ���ϴ� å�� ������ �Է¹ް� ����
	cout << "�߰��ϰ��� �ϴ� å�� ����� ����, ���ǻ�, �з��� ������� �Է��Ͻÿ�:";
	cin >> title >> author >> publisher >> genre;
	sfw.write(title.c_str(), title.size());
	sfw.write(author.c_str(), author.size());
	sfw.write(publisher.c_str(), publisher.size());
	sfw.write(genre.c_str(), genre.size());
}

void bookManage::deleteBook() {//����ڰ� ���Ͽ��� �����ϱ� ���ϴ� å�� ������ �Է¹ް� ����
	cout << "�����ϰ��� �ϴ� å�� ������ �Է��Ͻÿ�:";
	cin >> title;
	sfw.remove(title);
}