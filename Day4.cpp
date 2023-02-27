// positive and negative

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "It is Negative number " << endl;
    }
    else if (num > 0)
    {
        cout << "It is Positive number " << endl;
    }
    else
    {
        cout << "Alphabet" << endl;
    }
    return 0;
}