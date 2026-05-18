#include <iostream>
using namespace std;

void increaseByValue(int num) {
	num += 10;
	cout << num << endl;
}

void increaseByReference(int& num) {
	num += 10;
	cout << num << endl;
}



int main()
{

	int test = 5;
	cout << test << endl;
	increaseByValue(test);

	cout << endl;

	cout << test << endl;
	increaseByReference(test);
	cout << test;
	
	//The increaseByValue didn't keep the new value
	//The increaseByReference saved the new value because ampersand (&) was used


	return 0;
}
