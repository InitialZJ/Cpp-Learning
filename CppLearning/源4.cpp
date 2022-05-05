#include <iostream>
using namespace std;

void swapr(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	long a = 5, b = 10;
	swapr(int &(a), int(b));
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}