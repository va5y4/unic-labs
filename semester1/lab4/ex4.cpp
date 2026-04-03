#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int min = 2, max = 100;
	srand(time(0));
	int a = min + (rand() % (max - min + 1));
	int b = min + (rand() % (max - min + 1));
	int c = min + (rand() % (max - min + 1));
	
	double average = (a + b + c) / 3.0;
	cout << "The average of " << a << ", " << b << " and " << c << " is " << setprecision(4) << average;
	
	return 0;
}