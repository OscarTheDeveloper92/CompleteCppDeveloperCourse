#include <iostream>
#include <array>
using namespace std;

int sumArray(array<int, 10> myArray);

int main()
{
	array<int, 10> myArray{ 1,2,3,4,5,6,7,8,9,10 };
	int theResult = sumArray(myArray);

	cout << "The result is " << theResult << endl;

	return 0;
}

int sumArray(array<int, 10> myArray)
{
	int sum = 0;

	for (int i : myArray)
	{
		sum += i;
	}
	
	return sum ;
}