#include<iostream>
using namespace std;

int main() {
	int num = 1;

	while (num) {
		cout << "정수를 입력하세요(0이 입력되면 종료됩니다) : "; cin >> num;
		cout << num << "이 입력되었습니다." << endl;
	}
	cout << "반복이 종료됩니다." << endl;
	return 0;
}