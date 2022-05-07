#include <iostream>
#include "stock10.h"
using namespace std;

int main()
{
	cout << "有参构造:" << endl;
	Stock stock1("NanoSmart", 12, 20.0);
	stock1.show();
	Stock stock2("Boffo Objects", 2, 2.0);
	stock2.show();


	cout << "Assign 1 to 2" << endl;
	stock2 = stock1;
	stock1.show();
	stock2.show();

	cout << "reset" << endl;
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";

	return 0;
}
