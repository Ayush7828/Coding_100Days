#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        cout << "It is a Alphabet " << ch;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is A numebr " << ch;
    }
    else
    {
        cout << "It is A Special Symbol " << ch;
    }
    return 0;
}