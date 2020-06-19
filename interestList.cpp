#include "bookclass.h"

void Book::addtolist() {//사용자가 원하는 책의 제목을 입력받고 이를 목록에 추가
	cout << "관심목록에 추가할 책의 제목을 입력하시오:";
	cin >> title;
	Book::bookList.push_back(title);
	cout << Book::bookList;
}