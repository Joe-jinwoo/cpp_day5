#include<iostream>
using namespace std;

int main() {
	int res;

	cout << "���°���� Ż���ϰڽ��ϱ� : "; cin >> res;
	for (int i = 1; i <= 10; i++) {
		cout << i << "��° ó���Դϴ�." << endl;
		if (i == res)
			break;
	}



	return 0;
}