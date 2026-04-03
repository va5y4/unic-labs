#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number=0;

	cout << "Enter a number:";
	cin >> number;
	int result = pow(number, 2);
	cout << number << " in power of 2 is " << result;


	return 0;
}
