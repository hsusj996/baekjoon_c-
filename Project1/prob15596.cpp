#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a) {
	int iNumber = a.size();
	int iResult = 0;

	for (int i = 0; i < iNumber; i++) {
		iResult += a.at(i);
	}
	return iResult;
}

//���� ���� 15596
//c++ ������ �����
//c++������ �����Ҵ��� ���͸� Ȱ���Ѵ�.