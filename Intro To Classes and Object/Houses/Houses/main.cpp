#include <iostream>
#include <string>
using namespace std;

class House {
public://access modifiers/specifiers
	void setNumStories(int numStories) //member functions or methods. Not global, only belongs to class
	{
		this->numStories = numStories; 
	}

	void setNumWindows(int numWindows)//setters modify data
	{
		this->numWindows = numWindows;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	int getNumStories() const //getters access data, not modify
	{
		return numStories;
	}

	int getNumWindows() const
	{
		return numWindows;
	}

	string getColor() const
	{
		return color;
	}

private: //access modifiers/specifiers
	int numStories; //data members or fields. Synonymous
	int numWindows;
	string color;
};

void printHouseData(const House& house);

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

	printHouseData(house1);
	printHouseData(house2);

	return 0;
}

void printHouseData(const House& house)
{
	cout << "The house is " << house.getColor() << " and has "
		<< house.getNumStories() << " stories and "
		<< house.getNumWindows() << " windows." << endl;
}