#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char charA, charB;

    cout << "Enter two integers as characters: ";
    cin >> charA >> charB;
    int absValue = abs(charA - charB);
    cout << "The absolute value of the subtraction of " << '\'' << charA << '\'' << " - " << '\'' << charB << '\'' << " is " << absValue;

        return 0;
}
