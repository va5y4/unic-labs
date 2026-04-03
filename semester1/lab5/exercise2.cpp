#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int radius = 0;
	double x = 0, y = 0;

	cout << "Enter the radius of the circle: ";
	cin >> radius;

	cout << "Enter the coordinates of the point: ";
	cin >> x >> y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	if (distance <= radius)
		cout << setprecision(1) << fixed << "The point (" << x << "," << y << ") is in the circle";
	else
		cout << setprecision(1) << fixed << "The point (" << x << "," << y << ") is outside the circle";
	return 0;
}

