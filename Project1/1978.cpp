
//���� �ۼ��� �ڵ�
/*
#include <iostream>
using namespace std;

typedef struct sosu { //�Ҽ��� �Ǻ��� ��(�Ҽ������� �������)
	int num;
	bool a; //�Ҽ��� t
}; 

int main()
{
	int N; //ǥ����
	int res = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		sosu test_num;
		cin >> test_num.num;
		
		if (test_num.num == 1) //1�ΰ��
			test_num.a = false;
		else //1�� �ƴ� ���
		{
			test_num.a = true;
			for (int i = 2; i < test_num.num; i++) //2���� n-1���� ������ ����
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
//����, N�� �� ���ڰ����ϱ� �Ǵ� �� --���� ó���ص���


/* �ٸ� ����� �ۼ��� �ڵ� https://cryptosalamander.tistory.com/26
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
//�����佺�׳׽� -> �Ҽ��� �ڽ��� �����ٱ��� �˻��ϸ��(���� ����)