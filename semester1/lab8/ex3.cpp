#include <iostream>
using namespace std;


int main()
{
	double x = 0, y = 0;
	double div;
		

	do {
		cout << "Enter two numbers to divide: ";
		
			cin >> x >> y;
			if (y == 0)
				cout << "Wrong input." << endl;
			else
				div = x / y;
		
	} while (y == 0);
	
	cout << div;

	return 0;
}