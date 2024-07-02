#include <iostream>
using namespace std;

void modifyGlobal();

int counter = 0;

int main()
{
	cout << "Counter before iteration: " << counter << endl;

	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}

	cout << "Counter after iteration: " << counter << endl;

	return 0;
}

void modifyGlobal()
{
	counter++;
}