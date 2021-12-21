#include<iostream>
using namespace std;

int main() {
	int num, i;
	cout << "몇개의 *을 출력할까요? : "; cin >> num;

	for (i = 0; i < num; i++) {
		cout << "*";
	}

	return 0;
}