/*
어떤 수(n)가 입력되면 두 소수의 곱으로 나타낼 수 있으면 두 소수를 오름차순으로
출력하고, 그렇지 않으면 "wrong number"를 출력하는 프로그램을 작성하시오
*/
#include<iostream>
using namespace std;

int main() {
	int n, i, j;
	int a = 0, b = 0, c = 0;
	cin >> n;

	for (i = 2; i<=10; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				a = 1;
			}
		}

		if (a == 0) {
			if (n % i == 0) {
				if (n / i != 1) {
					for (j = 2; j < n / i; j++) {
						if ((n/i) % j == 0) {
							b = 1;
						}
					}
					if (b == 0) {
						cout << i <<" " << n / i << endl;
						c = 1;
						break;
					}
					else 
						b = 0;
				}
			}
		}
		else
			a = 0;
	}
	if (c == 0)
		cout << "wrong number";


	return 0;
}