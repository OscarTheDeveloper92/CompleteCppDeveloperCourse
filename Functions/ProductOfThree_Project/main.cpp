#include <iostream>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
	int productOf3 = multiply(1, 2, 3);

	cout << "The product of my three numbers is " << productOf3 << endl;

	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}