#include <iostream>
using namespace std;

int main()
{
        int score = 0;
        int sum = 0;
        int i = 0;
        double average = 0;

        cout << "Enter students's scores. Type -1 to end.\n";
        
        while (score != -1)
        {
            cin >> score;

            if (score > 0) {
                sum += score;
                i++;
            }
        }

        average = (double) sum / i;
        cout << average;
       
    return 0;
}

