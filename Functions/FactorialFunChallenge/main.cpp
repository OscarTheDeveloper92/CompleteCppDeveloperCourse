#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int totalFactorial = factorial(6);

	cout << "The factorial of 6 is " << totalFactorial << endl;

	return 0;
}

int factorial(int num)
{
	if (num >= 1)
	{
		return num * factorial(num - 1);
	}
}