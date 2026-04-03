#include <iostream>
using namespace std;



int main()
{
	int num = 0;

	cout << "Enter a 3-digit integer: ";
	cin >> num;

	int thirdDigit = num % 10;
	int secondDigit = num / 10 % 10;
	int firstDigit = num / 100 % 10;
	
	cout << firstDigit << "   " << secondDigit << "   " << thirdDigit;




	return 0;
}
