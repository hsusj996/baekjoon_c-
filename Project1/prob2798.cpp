#include <iostream>
using namespace std;

int main() {
	int iCardNum;
	int iGameNum;
	int ArrCard[100] = {0};
	int iResult = 0;

	cin >> iCardNum >> iGameNum;

	for (int i = 0; i < iCardNum; i++) {
		cin >> ArrCard[i];
	}

	for (int i = 0; i < iCardNum; i++) {
		for (int j = i + 1; j < iCardNum; j++) {
			for (int k = j + 1; k < iCardNum; k++) {
				int iHap = ArrCard[i] + ArrCard[j] + ArrCard[k];
				if (iHap <= iGameNum && iHap >= iResult) {
					iResult = iHap;
				}
			}
		}
	}

	cout << iResult;
}

//백준 2798 블랙잭
//브루트 포스 기본문제
//브루트 포스란? 해답(암호)를 찾기 위해 모든 경우의 수를 조사하는 것
//세 개의 합으로 목표값을 찾아야 하기 때문에 i, j, k를 두어 모든 경우의 수 조사