#include <iostream>
using namespace std;

int main()
{
    char letter;

    cout << "Enter a letter: " << endl;
    cin >> letter;

    if (letter >= 'A' && letter <= 'Z')
    {
        char uppercase = letter + 32;
        cout << "The lowercase of " << letter << " is " << uppercase << "." << endl; 
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        char lowercase = letter - 32;
        cout << "The uppercase of " << letter << " is " << lowercase << "." << endl;
    }
    else
    {
        cout << letter << " is not a letter!" << endl;
    }

    return 0;
}
