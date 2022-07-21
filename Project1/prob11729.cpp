#include <iostream>
#include <math.h>
using namespace std;

void transferblock(int n, int startpos, int endpos, int bypass) {
	if (n == 1) {
		cout << startpos << " " << endpos << "\n";
	}
	else {
		transferblock(n - 1, startpos, bypass, endpos);
		cout << startpos << " " << endpos << "\n";
		transferblock(n - 1, bypass, endpos, startpos);
	}
}

int main() {
	int n;

	cin >> n;

	cout << (int)pow(2, n) - 1 << "\n";

	transferblock(n, 1, 3, 2);
}

// 백준 11729 하노이 탑 문제
// 재귀 함수 이용
// bypass : 경유지 를 이용하는 함수로 만들어야함
// 이동횟수 pow(2,n)의 경우 n의 범위가 20으로 제한되어있는데
// pow는 기본적으로 double형을 리턴하기 때문에 출력시 오차범위 초과로 오류발생함
// 따라서 int로 범위제한해야함
