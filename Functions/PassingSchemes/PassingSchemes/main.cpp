#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int input, int& output);

int main()
{
	int myNumber = 20;
	int myInput;

	cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, myNumber is " << myNumber << endl;

	cout << endl << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged2 call, myNumber is " << myNumber << endl;
	
	threeTimesN(50, myInput); //in the func. call the second param has to be a variable
	cout << "After threeTimesN, myInput is " << myInput << endl;

	return 0;
}

void valueChanged1(int someNum)
{
	someNum = 100;
	cout << "Some num in valueChanged1 is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << "Inside valueChanged2 function, someNum is " << someNum << endl;
}

void threeTimesN(int input, int& output)
{
	output = input * 3;
}