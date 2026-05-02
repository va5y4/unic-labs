#include <iostream>
using namespace std;


int main()
{
	int sum = 0;
	int num = 0;

	cout << "Enter numbers to sum. Stop with 0." << "\n";

	do
	{
		cin >> num;
		sum += num;

	} while (num != 0);
	cout << "The sum is " << sum;

		return 0;
}