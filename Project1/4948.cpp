/* //내가 작성한 코드
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	bool* prime;
	while (1)
	{
		int cnt = 0;
		cin >> n;
		prime = new bool[2 * n + 1];
		fill_n(prime, 2 * n + 1, 1);
		prime[0] = false;
		prime[1] = false;

		if (n == 0)
			break;

		for (int i = 2; i <= sqrt(2 * n); i++)
		{
			if (prime[i] == true)
			{
				for (int j = 2 * i; j <= 2 * n; j = i + j)
				{
					prime[j] = false;
				}
			}
		}
		for (int i = n+1; i <= 2 * n; i++)
		{
			if (prime[i] == true)
				cnt++;
		}
		cout << cnt << endl;
	}
}*/
//정답 , cmt : 1929랑 유사, 에라토스테네스의 체