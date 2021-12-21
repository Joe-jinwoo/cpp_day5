#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "몇번째에서 탈출하겠습니까 : "; cin >> res;
	for (int i = 1; i <= 10; i++) {
		cout << i << "번째 처리입니다." << endl;
		if (i == res)
			break;
	}



	return 0;
}