#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r = 3, a = 2, b = 4, c = 6, d = 5, t = 1;
    double expressionA = 4 / (3 * (r + 34)) - 9 * (a + b * c) + (3 + d * (2 + a)) / ( a + b * d);
    double expressionB = 5.5 * pow((r + 2.5), 2.5 + t);
    cout << "The result of expression a is " << expressionA << endl;
    cout << "The result of expression b is " << expressionB << endl;

    return 0;
}
