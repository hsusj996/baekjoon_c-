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

//백준 문제 15596
//c++ 벡터의 사용방법
//c++에서는 동적할당대신 벡터를 활용한다.