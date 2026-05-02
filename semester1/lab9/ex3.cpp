#include <iostream>
using namespace std;

int perimeter(int a, int b){
    return 2 * (a + b);

}

int area(int a, int b) {
    return (a * b);
}


int main()
{
    int width, height;
    cout << "Enter width and height of an rectangle: ";
    cin >> width >> height;
    
    cout << "The perimeter is " << perimeter(width, height) << endl;
    cout << "The area is " << area(width, height);

    return 0;
}

