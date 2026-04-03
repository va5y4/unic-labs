#include <iostream>
using namespace std;


int main()
{

	int a = 6;
	a -= a + 1; 
	cout << a << endl; // 6 - (6 + 1) = 6 - (7) = -1
	a *= 6;
	cout << a << endl; // -1 * 6 = -6
	a /= 2;
	cout << a << endl; // -6 / 2 = -3



	return 0;
}
