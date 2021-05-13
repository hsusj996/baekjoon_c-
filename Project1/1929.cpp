//내가 작성한 코드
/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int min, max;
	bool* prime;
	cin >> min >> max;

	prime = new bool[max + 1];
	
	fill_n(prime, max + 1, 1);
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= sqrt(max); i++)
	{
		if (prime[i] == true)
		{
			for (int j = 2 * i; j <= max; j = j + i)
				prime[j] = false;
		}
	}
	for (int i = min; i <= max; i++)
		if (prime[i] == true)
			cout << i << endl;
}*/
//정답 cmt: new bool 사용법, 에라토스테네스의 체