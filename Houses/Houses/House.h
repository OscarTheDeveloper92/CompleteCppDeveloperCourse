#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
	public:
		void setNumStories(int numStories); //Known as methods, and/or member functions.
		
		void setNumWindows(int numWindows);

		void setColor(string color);

		int getNumStories() const;

		int getNumWindows() const;

		string getColor() const;

		void print() const;

	private:
		int numStories; //Data members (fields)
		int numWindows;
		string color;
}; //end of the class House.

#endif