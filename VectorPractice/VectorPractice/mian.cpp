#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> myFavPeople(5);
	//Another way of initializing elements into the vector
	//vector <string> myFavPeople; 
	/*
	myFavPeople.push_back("Tey");
	myFavPeople.push_back("Dave");
	myFavPeople.push_back("The Math Sorcerer");
	myFavPeople.push_back("Shred");
	myFavPeople.push_back("Jan Wilczek");
	*/

	myFavPeople[0] = "Tey";
	myFavPeople[1] = "Dave";
	myFavPeople[2] = "The Math Sorcerer";
	myFavPeople[3] = "Shred";
	myFavPeople[4] = "Jan Wilczek";

	myFavPeople.insert(myFavPeople.begin() + 2, "John Baugh");
	myFavPeople.pop_back();

	for (string names : myFavPeople)
	{
		cout << names << endl;
	}

	return 0;
}