#include <iostream>
using namespace std;

struct job
{
	string name;
	int salary;
	job(string _name, int _salary) :name(_name), salary(_salary) {};
};

//��ģ�庯��
void swapr(int& a, int& b)
{
	cout << 1 << endl;
}

//����ģ�庯��
template <typename T>
void swapr(T& a, T& b)
{
	cout << 2 << endl;
}

//���廯ģ�庯��
template<> void swapr(job& a, job& b)
{
	cout << 3 << endl;
}

//��ģ�� > ���廯 > ����

int main()
{
	//int a = 3, b = 5;
	//long a = 3L, b = 5L;
	job a("lucy", 100), b("bob", 200);
	swapr(a, b);
	return 0;
}