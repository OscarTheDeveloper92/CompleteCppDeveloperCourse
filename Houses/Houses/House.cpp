#include <iostream>
#include "House.h"

void House::setNumStories(int numStories) //Known as methods, and/or member functions.
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

int House::getNumStories() const
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

void House::print() const
{
	cout << "The house is " << color << " and has "
		<< numStories
		<< " stories and " << numWindows << " windows." << endl;
}