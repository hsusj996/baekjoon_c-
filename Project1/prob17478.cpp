#include <iostream>
using namespace std;

void printdash(int n) {
	for (int i = 0; i < 4 * n; i++) {
		cout << "_";
	}
}

void output(int n, int m) {
	if (m == 0) {
		cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
		cout << "\"����Լ��� ������?\"\n";
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		m++;
	}
	else if (m < n) {
		printdash(m);
		cout << "\"����Լ��� ������?\"\n";
		printdash(m);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		printdash(m);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		printdash(m);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		m++;
	}
	else {
		printdash(m);
		cout << "\"����Լ��� ������?\"\n";
		printdash(m);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		m++;
	}
	if (m <= n)
		output(n, m);

	printdash(m - 1);
	cout << "��� �亯�Ͽ���.\n";
}

int main() {
	int n;
	cin >> n;

	output(n, 0);
}

//���� 17478 ����Լ�
//���� �����ϰ� §��, ����Լ� output�� Ƚ���� �����ϱ� ���ؼ� ���� n, m �� ���� ������ ����� �ʿ����
//n--�� ���ؼ� n == 0�� �� Ƚ���� ����