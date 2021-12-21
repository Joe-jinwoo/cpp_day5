/*
다음과 같이 출력
*
**
***
****
*****
*/
#include<iostream>
using namespace std;

int main() {
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}