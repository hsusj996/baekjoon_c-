//���� �ۼ��� �ڵ�

/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T; //�׽�Ʈ����
	cin >> T;

	for (; T > 0; T--) //�׽�Ʈ���̽� �ݺ�
	{
		long long x, y;
		long long max = 1;
		long long res;

		cin >> x >> y;
	
		while (max * max <= (y - x))
			max++;
		max--;

		long long rem = y - x - max * max; //�׿��Ÿ�

		rem = (long long)ceil((double)rem / (double)max); //ceil : �ø���

		res = 2 * max - 1 + rem;
		cout << res << endl; //���
	}
}*/
//ceil�� ������� �ʾƼ� �ð��ʰ��߻�
//while���� for������ ������(���� �����̶��)


/*
//���� �ۼ��� �ڵ� https://cryptosalamander.tistory.com/25
#include <iostream>
#include <cmath> //ceil ���
#include <cstdio>
using namespace std;
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		long long x, y;
		long long move, max = 0;
		cin >> x >> y;
		while (max * max <= y - x)
			max++;
		max--;
		move = 2 * max - 1;
		long long rem = y - x - max * max;
		rem = (long long)ceil((double)rem / (double)max); //ceil ���
		move += rem;
		printf("%lld\n", move);
	}
}*/