#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	//Start of my solution
	vector<int> weight;
	int inputLbs;

	vector<string> names;
	string inputNames;

	cout << "Enter the names of 5 different people and their weights." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Name: ";
		cin >> inputNames;
		
		cout << "Weight: ";
		cin >> inputLbs;

		cin.get();

		names.push_back(inputNames);
		weight.push_back(inputLbs); // After moving the push_back operators to the end my solution works properly.
	}

	cout << endl << endl;

	for (int j = 0; j < 5; j++)
	{
		cout << names[j] << " weighs " << weight[j] << endl;
	}//End of my solution
	/*
		I was able to input all 5 weights and names successfully. 
		But I was unable to print out all 5 elements of the parallel vectors.
		I was only able to print out 4 of the names and weights successfully.
		The last parallel elements were printed as some weird long int.
	*/

	/*
	Udemy Solution

	const int NUM_PEOPLE = 5;
	vector<string> names;
	vector<int> weights;
	string tempName;
	int tempWeight;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter a name: " << endl;
		getline(cin, tempName);

		cout << "Please enter " << tempName << "'s weight." << endl;
		cin >> tempWeight;

		cin.get(); //consume newline character

		names.push_back(tempName);
		weights.push_back(tempWeight);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << names[i] << " weighs " << weights[i] << " lbs" <<endl;
	}
	*/

	return 0;
}