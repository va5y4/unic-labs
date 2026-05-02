#include <iostream>
using namespace std;

char randomChar() {
	srand(time(0));
	return 'a' + rand() % 26;

}

int main()
{
	cout << randomChar();
	

	return 0;
}

