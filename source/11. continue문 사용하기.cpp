#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "�� ��° ó���� �ǳʶٰڽ��ϱ� :"; cin >> res;

	for (int i = 1; i <= 10; i++) {
		if(i == res)
			continue;
		cout << i << "��° ó���Դϴ�." << endl;
	}


	return 0;
}