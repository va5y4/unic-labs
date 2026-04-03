#include <iostream>
using namespace std;

int main()
{
	int user = 0;
	bool cpuScissor = 0, cpuRock = 0, cpuPaper = 0;
	bool userScissor = 0, userRock = 0, userPaper = 0;

	cout << "Let's play rock scissor paper!" << endl;
	cout << "scissor(0), rock(1), paper(2)" << endl;
	cout << "What do you choose: ";
	cin >> user;

	srand(time(0));
	int computer = rand() % (2 - 0 + 1) - 0;
	switch (computer) {
	case 0:
		cout << "The computer is scissor." << endl;
		cpuScissor = true;
		break;
	case 1:
		cout << "The computer is rock." << endl;
		cpuRock = true;
		break;
	case 2:
		cout << "The computer is paper." << endl;
		cpuPaper = true;
		break;
	}


	switch (user) {
	case 0:
		cout << "You are scissor." << endl;
		userScissor = true;
		break;
	case 1:
		cout << "You are rock." << endl;
		userRock = true;
		break;
	case 2:
		cout << "You are paper." << endl;
		userPaper = true;
		break;
	default:
		cout << "Wrong input" << endl;
	}

	//0 scissor 1 rock 2 paper

	if (userPaper && cpuPaper || userRock && cpuRock || userScissor && cpuScissor)
		cout << "It is a draw.";
	if (cpuRock && userPaper)
		cout << "You win!";
	if (cpuRock && userScissor)
		cout << "You lost.";
	if (cpuScissor && userRock)
		cout << "You win.";
	if (cpuScissor && userPaper)
		cout << "You lost.";
	if (cpuPaper && userScissor)
		cout << "You win!";
	if (cpuPaper && userRock)
		cout << "You lost!";
	
	return 0;
}
