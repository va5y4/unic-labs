#include <iostream>
using namespace std;

int main()
{
    double num1=0, num2=0;
    int sum = 0;
    double average = 0;
    int product = 0;
    double division = 0;
    int quotient = 0;
    int modulo = 0;


    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    average = (num1 + num2) / 2.0;
    product = num1 * num2;
    division = num1 / num2;
    quotient = num1 / num2;
    modulo = int(num1) % int(num2);

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << average << endl;
    cout << "The product is: " << product << endl;
    cout << "The division is: " << division << endl;
    cout << "The quotient is: " << quotient << endl;
    cout << "The modulo is: " << modulo << endl;

    return 0;
}
