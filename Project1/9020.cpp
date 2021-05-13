/* //내가 작성한코드
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		bool* prime;
		int n;
		int left_num, right_num;
		cin >> n;
		prime = new bool[n + 1];
		fill_n(prime, n + 1, 1);
		prime[0] = false;
		prime[1] = false;

		for (int j = 2; j <= sqrt(n); j++)
		{
			if (prime[j])
			{
				for (int k = 2 * j; k <= n; k = j + k)
				{
					prime[k] = false;
				}
			}
		}
		right_num = n / 2;
		left_num = n / 2;
		while (1)
		{
			if (prime[right_num] && prime[left_num])
			{
				cout << left_num << " " << right_num << endl;
				break;
			}
			else
			{
				right_num++;
				left_num--;
			}
		}
	}
}*/
//정답, cmt: 좀 길어진것 같음, 에라토스테네스의 체, right-left 나누기