#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "몇 번째 처리를 건너뛰겠습니까 :"; cin >> res;

	for (int i = 1; i <= 10; i++) {
		if(i == res)
			continue;
		cout << i << "번째 처리입니다." << endl;
	}


	return 0;
}