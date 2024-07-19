#include <iostream>
#include <string>
#include "House.h"
using namespace std;

int main()
{
	House house1;
	House house2;

	house1.setNumStories(2);
	house1.setNumWindows(6);
	house1.setColor("red");

	house2.setNumStories(3);
	house2.setNumWindows(10);
	house2.setColor("blue");

	house1.print();
	house2.print();

	return 0;
}
