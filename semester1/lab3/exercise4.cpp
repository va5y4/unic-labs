#include <iostream>
using namespace std;

int main()
{
	int a = 6;
	int b = a--;
	cout << a << endl; // 6 - 1 = 5 ([a] was post-decremented on line 7)
	cout << b << endl; // same value as initial of [a] = 6
	a = 6;
	b = --a;
	cout << a << endl; // 6 - 1 = 5 ([a] was pre-decremented on line 11)
	cout << b << endl; // 5 (same value as the new value of [a] on line 12)

	return 0;
}
