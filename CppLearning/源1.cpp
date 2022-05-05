#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	/*int a[4]{ 1, 2, 3, 4 };
	cout << a[3] << endl;
	long plifts[] = { 25, 3.0 };
	cout << plifts[1] << endl;

	char fish[] = "Bubbles";
	cout << fish << endl;*/

	/*const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favori\n";
	cin.get(dessert, ArSize).get();
	cout << "Thx\n";*/

	//string kind;
	////cin >> kind;
	//getline(cin, kind);
	//cout << kind << endl;
	//cout << kind.size() << endl;

	/*int* p = new int;
	*p = 100;
	cout << p << ": " << *p << endl;*/

	/*int* p = new int[5];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	cout << *p << endl;
	cout << p[1] << endl;
	delete[] p;*/

	/*string name;
	int age;
	cout << "Enter your name: ";
	cin >> name;
	
	cout << "Enter your age: ";
	cin >> age;

	ofstream outFile;
	outFile.open("cppTest.txt");
	outFile << "name: " << name << endl << "age: " << age << endl;
	outFile.close();*/

	ifstream inFile;
	inFile.open("cppTest.txt");

	string nameDes, name, ageDes;
	int age;
	inFile >> nameDes >> name >> ageDes >> age;
	cout << nameDes << name << endl << ageDes << age << endl;
	inFile.close();

	return 0;
}