#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, z = 0, smallestNumber = 0;
   
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x < y && x < z)
        smallestNumber = x;
    if (y < x && y < z)
        smallestNumber = y;
    if (z < x && z < y)
        smallestNumber = z;

    cout << "The smallest number between " << x << ", " << y << " and " << z << " is " << smallestNumber;

    return 0;
}

