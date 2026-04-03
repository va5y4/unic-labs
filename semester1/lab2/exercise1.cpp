#include <iostream>
using namespace std;

int main()
{
	double sideLength = 0;
	double perimeter = 0;
	double area = 0;

	cout << "Enter the side length of the square in meters: ";
	cin >> sideLength;
	perimeter = 4 * sideLength;
	area = sideLength * sideLength;
	cout << "The perimeter of the square is: " << perimeter << " meters" << endl;
	cout << "The area of the square is " << area << " square meters" << endl;


	return 0;
}