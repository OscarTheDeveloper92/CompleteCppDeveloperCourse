#include <iostream>
#include <array>
using namespace std;

int main()
{
	array <int, 5> myArray{};

	cout << "Enter 5 numbers: ";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> myArray[i];
	}

	cout << endl << endl;

	cout << "Your chosen array is: ";

	for (int nums : myArray)
	{
		cout << nums << ", ";
	}

	cout << "size of array: " << myArray.size() << endl;

	for (int j = 0; j < 5; j++)
	{
		myArray[j] *= 2;
	}

	cout << "your array elements twice their amount are: ";

	for (int twicenums : myArray)
	{
		cout << twicenums << ", ";
	}


	return 0;
}