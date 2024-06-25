#include <iostream>
using namespace std;

void printSomething(); //Function prototype, declaration of function's existence.
void printMyName();

int main()
{
	printSomething(); //Calling/Invoking the function.
	printMyName();

	return 0;
}

void printSomething() //Function definition with head and body.
{
	cout << "Hey! Look I'm here!" << endl;
}

void printMyName()
{
	cout << "Oscar Rodriguez" << endl;
}