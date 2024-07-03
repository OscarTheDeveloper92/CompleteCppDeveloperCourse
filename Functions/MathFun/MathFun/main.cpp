#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int powResult = pow(2, 3);
	int sqrtResult = sqrt(25);
	int ceilResult = ceil(22.6);
	int floorResult = floor(22.6);
	int logResult = log2(512);

	cout << "2^3 is " << powResult << endl;
	cout << "The sqrt of 25 is " << sqrtResult << endl;
	cout << "22.6 rounded up is " << ceilResult << endl;
	cout << "22.6 rounded down is " << floorResult << endl;
	cout << "You need to take 2 to the power of " << logResult << " to get 512." << endl;

	return 0;
}