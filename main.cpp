#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//Beginning of my Solution
	vector <int> myInt(1);
	int doubledInts;

	cout << "Enter non-negative numbers and a negative number to quit: ";

	for (int i = 0; i < myInt.size(); i++)
	{
		int newInt;
		cin >> newInt;
		if (newInt > 0)
		{
			doubledInts = newInt * 2;
			myInt.push_back(doubledInts);
		}
		else if (newInt < 0)
		{
			break;
		}
	}
	for (int nums : myInt)
	{
		if (nums == 0)
		{
			continue;
		}
		cout << nums << ", ";
	}//End of my Solution

	/*
	Course solution
	vector<int> myIntVector;
	int input;

	//priming read
	cout << "Enter a positive integer to add to the vector or negative to quit: " << endl;
	cin >> input;

	while(input >= 0)
	{
		myIntVector.push_back(input);
		cout << "Enter a positive integer to add to the vector or negative to quit: " << endl;
		cin >> input;
	}

	cout << "Now here are double the amounts: ";

	for(int nums : myIntVector)
	{
		cout << (nums * 2) << endl;
	}
	*/

	return 0;
}