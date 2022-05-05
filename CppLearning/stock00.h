#pragma once
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
public:
	Stock();
	~Stock();
	void acquire(const std::string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();

private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//内联函数：定义位于类声明中的函数
	void set_tot() { total_val = shares * share_val; }
};

#endif
