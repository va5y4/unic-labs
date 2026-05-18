#include <iostream>
using namespace std;


int isItEven(int num) { //a
	bool isEven;

	if (num % 2 == 0)
		isEven = true;
	else
		isEven = false;

	return isEven;
}

void multiMessage(int times) { //b
	for (int i = 1; i <= times; i++)
		cout << i << ".Message" << endl;
}

char swap(char letter) { //c
	if (letter >= 'a' && letter <= 'z')
		return letter - 32;
}

int numOfDigits(int x) { //d
	if (x == 0)
		return 1;

	int count = 0;

	while (x != 0)
	{
		x = x / 10;
		count++;

	}
	return count;
}

int main()
{

	int x = 222;


	//Exercise a
	if (isItEven(x)) //call 1
		cout << x << " even" << endl;
	else
		cout << x << " not even" << endl;
	int y = 111;
	if (isItEven(y)) //call 2
		cout << y << " even" << endl;
	else
		cout << y << " not even" << endl;

	cout << endl;

	//Exercise b

	int times = 0;
	cout << "Enter the number of times to print the message: ";
	cin >> times;
	multiMessage(times); //call 1
	cout << endl;
	multiMessage(3); //call 2
	cout << endl;

	//Exercise c
	char letter = 0;
	cout << "Enter a lowercase letter to swap to uppercase: ";
	cin >> letter;
	cout << swap(letter) << endl; //call 1
	cout << endl;
	cout << swap('v') << endl; //call 2


	//Exercise d
	int num = 0;
	cout << endl << "Enter a number to count the digits: ";
	cin >> num;
	cout << numOfDigits(num) << endl; //call 1
	cout << endl;
	cout << numOfDigits(123456789) << endl; //call 2


	return 0;
}

