#include <iostream>
#include <cmath>

using namespace std;

void display_title()
{
	cout << "Miles Per Gallon Calculator \n";
}

double calculate_mpg(double miles, double gallons)
{
	double mpg = miles / gallons;
	mpg = round(mpg * 10) / 10; //rounds to one decimal place
	return mpg;
}

int main()
{
	display_title();
	
	double miles;
	cout << "Enter miles driven: ";
	cin >> miles;

	double gallons;
	cout << "Enter gallons of gas used: ";
	cin >> gallons;

	double mpg = calculate_mpg(miles, gallons);

	cout << "Miles per gallon: " << mpg << endl << endl;

	return 0;
}