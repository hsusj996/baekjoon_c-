//���� �ۼ��� �ڵ�
/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int M, N;
	int hap = 0,min;
	cin >> M >> N;

	for (; M <= N; M++)
	{
		bool a = true;
		if (M == 1)
			continue;
		for (int i = 2; i <= sqrt(M); i++)
		{
			if (M % i == 0)
			{
				a = false;
				break;
			}
		}
		if (a == true)
		{
			if (hap == 0)
				min = M;

			hap += M;
		}
	}
	if (hap == 0)
		cout << -1;
	else
		cout << hap << endl << min;
}*/
//���� ,  continue,break ȥ������ �ð� �ɸ� 

/*�ٸ� ����� �ۼ��� �ڵ� https://psmkr0225.tistory.com/191
#include <iostream>
using namespace std;

int main()
{
	int max, min;
	int count = 0; // ������������ ���� ����
	int nCount = 0;  // �Ҽ� ����
	int result = 0, minNumber;  // ��, �Ҽ� �ּڰ�

	cin >> min;
	cin >> max;

	for (int i = min; i <= max; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				count++;
		}

		if (count == 2)
		{
			nCount++;
			result += i;

			if (nCount == 1)
				minNumber = i;
		}
		count = 0;
	}

	if (nCount == 0)
	{
		minNumber = -1;
		cout << minNumber << endl;
	}
	else
	{
		cout << result << endl << minNumber << endl;
	}

	return 0;
}*/
//1���� ������ 2���� ��찡 �Ҽ� -> ���ǹ��� ������ ��Ư��