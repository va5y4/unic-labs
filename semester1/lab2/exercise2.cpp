#include <iostream>
using namespace std;

int main()
{
	int yearBirth = 0;
	int age = 0;
	int const currentYear = 2026;


	cout << "Enter your year of birth: ";
	cin >> yearBirth;
	age = currentYear - yearBirth;
	cout << "Your age is " << age << " years old";


	return 0;
}