/*
���� ��(a), ���(r), �� ��°������ ��Ÿ���� ����(n)�� �Էµ� ��
n��° ���� ����ϴ� ���α׷��� ������.
*/
#include<iostream>
using namespace std;

int main() {
	int a, r, n;
	int ans;

	cout << "���۰��� �Է��ϼ��� : "; cin >> a;
	cout << "��� �Է��ϼ��� : "; cin >> r;
	cout << "�� ��° ���� ����ұ�� : "; cin >> n;
	ans = a;
	for (int i = 1; i < n; i++) {
		ans *= r;
	}

	cout << ans << endl;
	
	return 0;
}