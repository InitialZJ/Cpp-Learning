#include <iostream>
#include "Stock20.h"
using namespace std;

const int STKS = 4;
int main()
{
	Stock stocks[STKS] = {
		Stock{"NanoSmart", 12, 20.0},
		Stock{"Boffo Objects", 200, 2.0},
		Stock{"Monolithic Obelisks", 130, 3.25},
		Stock{"Fleep Enter", 60, 6.5}
	};
	cout << "Stock holding" << endl;
	int st;
	for (st = 0; st < STKS; st++)
	{
		stocks[st].show();
	}
	const Stock* top = &stocks[0];
	for (st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
	cout << "Most valuable holding" << endl;
	top->show();

	return 0;
}