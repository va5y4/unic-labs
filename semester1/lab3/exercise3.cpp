#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    int b = a++;
    cout << a << endl; // [a] got post-incremented to 7
    cout << b << endl; // [b] stayed with the initial value of [a] as it increased only after next line
    a = 6;
    b = ++a;
    cout << a << endl; // [a] was initialized to 6 but afterwards it was pre-incremented to 7
    cout << b << endl; // [b] became 7 because of pre-incremenent of [a]


    return 0;
}

