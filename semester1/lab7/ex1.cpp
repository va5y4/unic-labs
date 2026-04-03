    #include <iostream>
    using namespace std;

    int main()
    {
        int score = 0;
        int sum = 0;
        double average = 0;
        cout << "Enter 5 students' scores.\n";
    
    
        int i = 0;
        while (i < 5)
        {
            cin >> score;
            sum += score;
            i++;
        }
        average = (double) sum / 5;
        cout << "The average of the 5 students' scores is " << average << ".";

        return 0;
    }