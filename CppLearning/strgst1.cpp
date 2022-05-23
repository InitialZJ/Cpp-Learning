#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	using namespace std;
	string letters;
	cout << "Enter the letter grouping (quit to quit): ";
	while (cin >> letters && letters != "quit")
	{
		cout << "Permutations of " << letters << endl;
		// 要想获得所有的排列，需要先按照从小到大的顺序排序
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
		{
			cout << letters << endl;
		}
		cout << "Enter next sequence (quit to quit): ";
	}
	cout << "Done.\n";

	return 0;
}