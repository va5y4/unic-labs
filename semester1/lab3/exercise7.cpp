#include <iostream>
using namespace std;

int main()
{
    int minutes = 0;

    cout << "How many minutes?" << endl;
    cin >> minutes;

    int hours = minutes / 60;
    double remMinutes = minutes % 60;

    cout << hours << " hours" << " and " << remMinutes << " minutes";

    return 0;
}

