#include <iostream>
using namespace std;

int main()
{
    double subtotal = 0;
    int gratuity = 0;
    double totalGratuity = 0;
    double totalAmount = 0;

    cout << "Enter subtotal in euros: ";
    cin >> subtotal;
    cout << "Enter gratuity rate as a percentage: ";
    cin >> gratuity;

    totalGratuity = gratuity * 0.01 * 10;
    totalAmount = subtotal + totalGratuity;


    cout << "The gratuity amount is " << totalGratuity << " euros" << endl;
    cout << "The total amount to be paid in euros is " << totalAmount;



    return 0;
}

