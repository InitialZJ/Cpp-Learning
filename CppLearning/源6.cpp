#include <iostream>
using namespace std;

int main()
{
	//new 分配存储空间并初始化
	int* pi = new int(6);

	double* pd = new double(99.99);

	struct where
	{
		double x, y;
	};
	where* one = new where{ 1.2,2.3 };

	int* arr = new int[4]{ 1, 2, 3, 4 };

	return 0;
}