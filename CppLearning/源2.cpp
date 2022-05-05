#include <iostream>
using namespace std;

const double* pam(const int a)
{
	double a2 = (double)a * a * 1.5;
	return &a2;
}

typedef const double* (*p_fun) (const int);

int main()
{
	//cout << pam(5) << endl;

	/*double (*pf)(int);
	pf = pam;
	cout << pf(6) << endl;
	cout << (*pf)(6) << endl;*/

	/*const double* (*pf1) (const int) = pam;

	auto pf2 = pf1;

	cout << (*pf1)(5) << ": " << *(*pf1)(5) << endl;
	cout << pf2(5) << ": " << *pf2(5) << endl;*/

	p_fun p1 = pam;
	cout << *p1(7) << endl;

	return 0;
}