//내가 작성한 코드

/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T; //테스트갯수
	cin >> T;

	for (; T > 0; T--) //테스트케이스 반복
	{
		long long x, y;
		long long max = 1;
		long long res;

		cin >> x >> y;
	
		while (max * max <= (y - x))
			max++;
		max--;

		long long rem = y - x - max * max; //잉여거리

		rem = (long long)ceil((double)rem / (double)max); //ceil : 올림수

		res = 2 * max - 1 + rem;
		cout << res << endl; //출력
	}
}*/
//ceil을 사용하지 않아서 시간초과발생
//while문이 for문보다 빠르다(같은 조건이라면)


/*
//남이 작성한 코드 https://cryptosalamander.tistory.com/25
#include <iostream>
#include <cmath> //ceil 사용
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
		rem = (long long)ceil((double)rem / (double)max); //ceil 사용
		move += rem;
		printf("%lld\n", move);
	}
}*/