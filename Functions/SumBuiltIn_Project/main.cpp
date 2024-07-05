#include <iostream>
#include <array>
using namespace std;

//Beginning of my solution
int sumArray(int myNums[], int size);

int main()
{
	int myNums[] = { 2, 5, 2, 10, 20, 15, 100, 25 };
	int theSum;

	theSum = sumArray(myNums, 8);

	cout << "The sum total is: " << theSum << endl;

	return 0;
}

int sumArray(int myNums[], int size)
{
	int sum = 0;
	int total;

	for (int i = 0; i < size; i++)
	{
		sum += myNums[i];
	}

	return total = sum;
} //End of my solution

/*
Course Solution

int sumArray(int myArray[], int arraySize);

int main()
{
	int myArray[]{ 2, 5, 2, 10, 20, 15, 100, 25 };
	int sum = sumArray(myArray, 8);

	cout << "Sum of the elements in myArray is " << sum << endl;

	return 0;
}

int sumArray(int myArray[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++)
	{
		sum += myArray[i]; //sum = sum + myArray[i];
	}

	return sum;
}

*/