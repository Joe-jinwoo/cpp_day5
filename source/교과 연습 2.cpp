//시험점수를 입력받아 그 합을 출력하시오. 0입력 받으면 종료
#include<iostream>
using namespace std;

int main() {
	int n = 1, sum = 0;

	while (n) {
		cin >> n;
		sum += n;
	}

	cout << "시험 점수의 합계는 " << sum << "입니다." << endl;

	return 0;
}