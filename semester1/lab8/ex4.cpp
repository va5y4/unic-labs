#include <iostream>
using namespace std;


int main()
{
	int score = 0, i = 0;
	double avg = 0;
	double max = 0, sum = 0;

	cout << "Enter scores. End with -1." << endl;
	
	do {
		cin >> score;
		sum = sum + score;

		if (max < score)
		 max = score;
				
		i++;

	} while (score != -1);

	sum++;
	i--;

	avg = sum / i;
	
	cout << "Average = " << avg << endl;
	cout << "Maximum = " << max << endl;

	return 0;
}
