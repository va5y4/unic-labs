#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int min = 10;
	int max = 50;
	int num = 0;
	int maximum = 0;

	while (i < 10)
	{
		srand(time(0));
		num = rand() % (max - min + 1) + min;
		if (maximum < num)
			maximum = num;
		i++;
	}

	cout << "The maximum is " << maximum;

	return 0;
}