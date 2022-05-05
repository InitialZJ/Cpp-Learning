#include <iostream>
using namespace std;

inline double square(double x) { return x * x; }

int main()
{
	double a;
	cin >> a;

	cout << square(a) << endl;
}
