#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// fin에서 라인단위로 vector에 넣는다
void fileRead(ifstream& fsr, vector<string>& v)
{
	string keyword;
	cout << "검색어를 입력하시오 : ";
	cin >> keyword;
	while (getline(fsr, keyword))
		v.push_back(keyword);
}

// 벡터에서 word를 찾아서 출력한다
void Search(vector<string>& v, string& word)
{
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1)
			cout << v[i] << endl;
	}
}

//출처: https://drbeeeye.tistory.com/76 [dr. Bee Eye]