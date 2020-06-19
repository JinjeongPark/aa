#include<iostream>
#include <string>
#include <vector>
#include "bookclass.h"
using namespace std;

class bookManage : public Book {//book클래스를 public으로 상속하는 bookManage클래스 생성 및 멤버 변수, 멤버 함수 선언
public:
	void insertBook();
	void deleteBook();
};
//멤버 함수 정의
void bookManage::insertBook() {//사용자가 파일에 추가하길 원하는 책의 정보를 입력받고 저장
	cout << "추가하고자 하는 책의 제목과 저자, 출판사, 분류를 순서대로 입력하시오:";
	cin >> title >> author >> publisher >> genre;
	sfw.write(title.c_str(), title.size());
	sfw.write(author.c_str(), author.size());
	sfw.write(publisher.c_str(), publisher.size());
	sfw.write(genre.c_str(), genre.size());
}

void bookManage::deleteBook() {//사용자가 파일에서 삭제하길 원하는 책의 제목을 입력받고 삭제
	cout << "삭제하고자 하는 책의 제목을 입력하시오:";
	cin >> title;
	sfw.remove(title);
}