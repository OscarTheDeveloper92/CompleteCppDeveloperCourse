#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
	public://access modifiers/specifiers
		void setNumStories(int numStories); //member functions or methods. Not global, only belongs to class
		

		void setNumWindows(int numWindows); //setters modify data
		

		void setColor(string color);
		

		int getNumStories() const; //getters access data, not modify
		

		int getNumWindows() const;
		

		string getColor() const;

		void print() const;
		

	private: //access modifiers/specifiers
		int numStories; //data members or fields. Synonymous
		int numWindows;
		string color;
};

#endif
