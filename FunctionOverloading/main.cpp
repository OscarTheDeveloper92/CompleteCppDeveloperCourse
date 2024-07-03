#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
int getResult(int nCubed);
string getResult(string str1, string str2);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Oscar", "Rodriguez");
	int cubedResult = getResult(2);

	cout << "Result number is " << resultNum << endl;
	cout << "Name result is " << nameResult << endl;
	cout << "The cubed result is " << cubedResult << endl;

	return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int nCubed)
{
	return (nCubed * nCubed * nCubed);
}