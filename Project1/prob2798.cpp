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

//���� 2798 ����
//���Ʈ ���� �⺻����
//���Ʈ ������? �ش�(��ȣ)�� ã�� ���� ��� ����� ���� �����ϴ� ��
//�� ���� ������ ��ǥ���� ã�ƾ� �ϱ� ������ i, j, k�� �ξ� ��� ����� �� ����