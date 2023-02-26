// Get an input character from the user and give the ASCII value of the given input as the output.

// Input :

//     b

//   Output :

//     98

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";

    cin >> ch;
    cout << "Output is " << (int)ch;
    return 0;
}