#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// fin���� ���δ����� vector�� �ִ´�
void fileRead(ifstream& fsr, vector<string>& v)
{
	string keyword;
	cout << "�˻�� �Է��Ͻÿ� : ";
	cin >> keyword;
	while (getline(fsr, keyword))
		v.push_back(keyword);
}

// ���Ϳ��� word�� ã�Ƽ� ����Ѵ�
void Search(vector<string>& v, string& word)
{
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1)
			cout << v[i] << endl;
	}
}

//��ó: https://drbeeeye.tistory.com/76 [dr. Bee Eye]