/*
'q'가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.
*/
#include<iostream>
using namespace std;

int main() {
	char c='a';
	while (c != 'q') {
		cin >> c;
		cout << c << endl;
	}

	return 0;
}