#include <iostream>
#include <cmath>

using namespace std;


int main()

{
	int max = 2;
	int min = 0;
	int userChoice = 0;

	cout << "Let's play rock scissor paper!" << endl;
	cout << "scissor (0), rock (1), paper (2)" << endl;
	cout << "What do you choose: ";
	cin >> userChoice;

	srand(time(0));
	int computerChoice = rand() % (max - min + 1) + min;

	if (computerChoice == 0)
		cout << "The computer is scissor." << endl;
	else if (computerChoice == 1)
		cout << "The computer is rock." << endl;
	else
		cout << "The computer is paper." << endl;

	if (userChoice == 0)
		cout << "You are scissor." << endl;
	else if (userChoice == 1)
		cout << "You are rock." << endl;
	else if (userChoice == 2)
		cout << "You are paper." << endl;
	else
		cout << "You entered a wrong value. Game stops." << endl;


	//scissor (0), rock (1), paper (2)
	if (computerChoice == userChoice)
		cout << "It\'s a draw.";
	else if (computerChoice == 0 && userChoice == 1)
		cout << "You won!";
	else if (computerChoice == 0 && userChoice == 2)
		cout << "You lost.";
	else if (computerChoice == 1 && userChoice == 0)
		cout << "You lost.";
	else if (computerChoice == 1 && userChoice == 2)
		cout << "You won!";
	else if (computerChoice == 2 && userChoice == 0)
		cout << "You won!";
	else if (computerChoice == 2 && userChoice == 1)
		cout << "You lost.";

	return 0;
}
