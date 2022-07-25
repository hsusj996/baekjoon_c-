#include <iostream>
#include <math.h>
using namespace std;

int CalJariHap(int iNum, int Jari) {
	switch (Jari) {
	case 1:
		return iNum + (iNum / 10) + (iNum % 10);
	case 2:
		return iNum + (iNum / 100) + ((iNum % 100) / 10) + (iNum % 10);
	case 3:
		return iNum + (iNum / 1000) + ((iNum % 1000) / 100) + ((iNum % 100) / 10) + (iNum % 10);
	case 4:
		return iNum + (iNum / 10000) + ((iNum % 10000) / 1000) + ((iNum % 1000) / 100) + ((iNum % 100) / 10) + (iNum % 10);
	case 5:
		return iNum + (iNum / 100000) + ((iNum % 100000) / 10000) + ((iNum % 10000) / 1000) + ((iNum % 1000) / 100) + ((iNum % 100) / 10) + (iNum % 10);
	default:
		return 0;
	}
}

int SearchBunhaeHap(int Min, int iNumber, int Jari) {
	for (int i = Min; i < iNumber; i++) {
		if (CalJariHap(i, Jari) == iNumber) {
			return i;
			break;
		}
	}

	return 0;
}

int main() {
	int iNumber;
	int iJariNumber = 0;
	int iSearchMinNumber;
	int iResult;

	cin >> iNumber;

	for (int i = 1; i < 6; i++) {
		if (iNumber / (int)(pow(10,i+1)) == 0) {
			iJariNumber = i;
			break;
		}
	}

	if (iJariNumber == 1 && iNumber < 20) {
		iSearchMinNumber = 1;
	}
	else {
		iSearchMinNumber = iNumber - 9 * (iJariNumber + 1);
	}
	
	iResult = SearchBunhaeHap(iSearchMinNumber, iNumber, iJariNumber);

	cout << iResult;
}

//백준 2231 브루트포스 분해합
//분해합 문제, 조건에 맞는 수를 찾는 범위를 찾기
//자릿수에 따라 최소탐색 숫자를 지정
//자릿수의 합을 계산하고 목표숫자와 비교