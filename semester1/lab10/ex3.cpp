#include <iostream>
using namespace std;

void mult(int num1, int num2) { // void is for functions without return value
	cout << num1 * num2 << endl;
	
}

int multR(int num1, int num2) {
	return num1 * num2;
}


int main()
{
	int x, y;
	cout << "Enter two numbers to multiply: ";
	cin >> x >> y;

	mult(x, y);

	cout << multR(x, y);


	return 0;
}
