#include "stock00.h"
using namespace std;

int main()
{
	Stock stock;

	//首次购买
	stock.acquire("yeahka", 30, 1);
	stock.show();

	//二次购买
	stock.buy(100, 1.5);
	stock.show();

	//更新价格
	stock.update(2.5);
	stock.show();

	//出售
	stock.sell(50, 2);
	stock.show();

	return 0;
}
