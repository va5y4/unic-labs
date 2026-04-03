#include <iostream>
using namespace std;

int main()
{
    char input = 0;
    bool isLetter = 0, isUppercase = 0, isVowel = 0;
    cout << "Enter a letter: ";
    cin >> input;
    
    
    switch (input) {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'X':
    case 'Y':
    case 'Z':
        isLetter = true;
        isUppercase = true;
    }

    switch (input) {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    case 'Y':
    case 'y':
        isVowel = true;
    }

    switch (input) {
    case 'B':
    case 'b':
    case 'C':
    case 'c':
    case 'D':
    case 'd':
    case 'F':
    case 'f':
    case 'G':
    case 'g':
    case 'H':
    case 'h':
    case 'J':
    case 'j':
    case 'K':
    case 'k':
    case 'L':
    case 'l':
    case 'M':
    case 'm':
    case 'N':
    case 'n':
    case 'P':
    case 'p':
    case 'Q':
    case 'q':
    case 'R':
    case 'r':
    case 'S':
    case 's':
    case 'T':
    case 't':
    case 'V':
    case 'v':
    case 'W':
    case 'w':
    case 'X':
    case 'x':
    case 'Z':
    case 'z':
        isVowel = false;
    }

    switch (input) {
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'x':
    case 'y':
    case 'z':
        isLetter = true;
        isUppercase = false;    
    }

    if (isLetter) {
        if (isUppercase)
            cout << "The letter " << input << " is an upper-case letter." << endl;
        else
            cout << "The letter " << input << " is an lower-case letter." << endl;

        if (isVowel)
            cout << "Also, " << input << " is a vowel." << endl;
        else cout << "Also, " << input << " is a consonant." << endl;
    }
    else
        cout << "The " << input << " is not a letter.";
    return 0;
}