//내가 작성한 코드
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
//정답 ,  continue,break 혼동으로 시간 걸림 

/*다른 사람이 작성한 코드 https://psmkr0225.tistory.com/191
#include <iostream>
using namespace std;

int main()
{
	int max, min;
	int count = 0; // 나눠떨어지는 수의 갯수
	int nCount = 0;  // 소수 갯수
	int result = 0, minNumber;  // 합, 소수 최솟값

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
//1부터 나눠서 2개인 경우가 소수 -> 조건문의 조건이 독특함