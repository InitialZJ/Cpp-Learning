#include <iostream>
#include "stringbad.h"
using namespace std;

int main()
{
	// 使用自定义构造函数，num_strings会加一
	StringBad bad1("lzj");
	cout << bad1 << endl;

	// 使用复制构造函数，出错
	StringBad bad2 = bad1;
	cout << bad2 << endl;

	/*
	1: "lzj"object created
	lzj
	lzj
	"lzj"object deleted, 0 left
	"葺葺葺葺硤A旗"object deleted, -1 left
	*/

	return 0;
}