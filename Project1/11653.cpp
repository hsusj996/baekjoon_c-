/*
내가 작성한 코드
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 2; N != 1;)
	{
		if (N % i == 0)
		{
			N = N / i;
			cout << i << endl;
		}
		else
			i++;
	}
}*/

/*정답 
cmt: 조건문의 차이가 중요,
N을 소인수로 줄여나가면서 1이 되는 경우 반복종료*/