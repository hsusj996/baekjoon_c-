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

// ���� 11729 �ϳ��� ž ����
// ��� �Լ� �̿�
// bypass : ������ �� �̿��ϴ� �Լ��� ��������
// �̵�Ƚ�� pow(2,n)�� ��� n�� ������ 20���� ���ѵǾ��ִµ�
// pow�� �⺻������ double���� �����ϱ� ������ ��½� �������� �ʰ��� �����߻���
// ���� int�� ���������ؾ���
