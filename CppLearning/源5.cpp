#include <iostream>
using namespace std;

struct job
{
	string name;
	int salary;
	job(string _name, int _salary) :name(_name), salary(_salary) {};
};

//非模板函数
void swapr(int& a, int& b)
{
	cout << 1 << endl;
}

//常规模板函数
template <typename T>
void swapr(T& a, T& b)
{
	cout << 2 << endl;
}

//具体化模板函数
template<> void swapr(job& a, job& b)
{
	cout << 3 << endl;
}

//非模板 > 具体化 > 常规

int main()
{
	//int a = 3, b = 5;
	//long a = 3L, b = 5L;
	job a("lucy", 100), b("bob", 200);
	swapr(a, b);
	return 0;
}