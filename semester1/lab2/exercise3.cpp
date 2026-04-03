#include <iostream>
using namespace std;

int main()
{
	double miles = 100;
    double const KILOMETERS_PER_MILE = 1.609;
	double kilometers = 0;
	kilometers = miles * KILOMETERS_PER_MILE;

	cout << kilometers;


	return 0;
}