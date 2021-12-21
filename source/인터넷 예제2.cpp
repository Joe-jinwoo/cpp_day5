/*
시작 값(a), 등비(r), 몇 번째인지를 나타내는 정수(n)가 입력될 때
n번째 수를 출력하는 프로그램을 만들어보자.
*/
#include<iostream>
using namespace std;

int main() {
	int a, r, n;
	int ans;

	cout << "시작값을 입렵하세요 : "; cin >> a;
	cout << "등비를 입력하세요 : "; cin >> r;
	cout << "몇 번째 수를 출력할까요 : "; cin >> n;
	ans = a;
	for (int i = 1; i < n; i++) {
		ans *= r;
	}

	cout << ans << endl;
	
	return 0;
}