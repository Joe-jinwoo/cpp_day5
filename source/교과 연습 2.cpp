//���������� �Է¹޾� �� ���� ����Ͻÿ�. 0�Է� ������ ����
#include<iostream>
using namespace std;

int main() {
	int n = 1, sum = 0;

	while (n) {
		cin >> n;
		sum += n;
	}

	cout << "���� ������ �հ�� " << sum << "�Դϴ�." << endl;

	return 0;
}