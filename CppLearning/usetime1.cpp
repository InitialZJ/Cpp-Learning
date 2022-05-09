#include <iostream>
#include "mytime1.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total, multi;

	cout << "planning time = ";
	cout << planning;
	cout << endl;

	cout << "coding time = ";
	cout << coding;
	cout << endl;

	cout << "fixing time = ";
	cout << fixing;
	cout << endl;

	total = coding + fixing;
	cout << "coding + fixing = ";
	cout << total;
	cout << endl;

	multi = 1.5 * coding;
	cout << "1.5 * coding = ";
	cout << multi;
	cout << endl;

	return 0;
}