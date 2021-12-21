//1~10까지의 짝수를 출력하시오.
#include<iostream>
using namespace std;

int main() {
	int i;

	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			cout << i << endl;
	}

	return 0;
}