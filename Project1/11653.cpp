/*
���� �ۼ��� �ڵ�
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

/*���� 
cmt: ���ǹ��� ���̰� �߿�,
N�� ���μ��� �ٿ������鼭 1�� �Ǵ� ��� �ݺ�����*/