#include "House.h"
#include <string>
#include <iostream>
using namespace std;

void House::print() const
{
	cout << "The house is " << color << " and has "
		<< numStories << " stories and "
		<< numWindows << " windows." << endl;
}

void House::setNumStories(int numStories) //member functions or methods. Not global, only belongs to class
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)//setters modify data
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

int House::getNumStories() const //getters access data, not modify
{
	return numStories;
}

int House::getNumWindows() const
{
	return numWindows;
}

string House::getColor() const
{
	return color;
}