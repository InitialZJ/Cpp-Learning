#include <iostream>
using namespace std;

//自定义名称空间
namespace Jack
{
	void fetch()
	{
		cout << "Using Jack!" << endl;
	}
}

namespace Jill
{
	void fetch()
	{
		cout << "Using Jill!" << endl;
	}
}

int main()
{
	Jack::fetch();
	Jill::fetch();

	return 0;
}