#include <iostream>
using namespace std;


int main()
{
	int x = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0) {
			x = i * 2;
			cout << x << endl;
		}
	}


		return 0;
}