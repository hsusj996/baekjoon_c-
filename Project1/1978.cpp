
//내가 작성한 코드
/*
#include <iostream>
using namespace std;

typedef struct sosu { //소수를 판별할 수(소수정보를 담고있음)
	int num;
	bool a; //소수면 t
}; 

int main()
{
	int N; //표본수
	int res = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		sosu test_num;
		cin >> test_num.num;
		
		if (test_num.num == 1) //1인경우
			test_num.a = false;
		else //1이 아닌 경우
		{
			test_num.a = true;
			for (int i = 2; i < test_num.num; i++) //2부터 n-1까지 나누는 과정
			{
				if (test_num.num % i == 0)
					test_num.a = false;
			}
		}
		if (test_num.a == true)
			res++;
	}
	cout << res;
}
//정답, N이 곧 숫자개수니까 판단 후 --으로 처리해도됨


/* 다른 사람이 작성한 코드 https://cryptosalamander.tistory.com/26
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	cin >> num;
	int count = num;
	int input[100] = { 0, };
	for (int i = 0; i < num; i++) {
		cin >> input[i];
		if (input[i] == 1)
			count--;
	}

	for (int i = 0; i < num; i++)
		for (int j = 2; j <= sqrt(input[i]); j++)
		{
			if (input[i] % j == 0)
			{
				count--;
				break;
			}
		}
	cout << count;
	return 0;
}*/
//에라토스테네스 -> 소수는 자신의 제곱근까지 검사하면됨(좀더 빠름)