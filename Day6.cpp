#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a two number " << endl;
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        cout << "this point lies in first Quadrant " << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "this point lies in second Quadrant " << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "this point lies in third Quadrant " << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "this point lies in fourth Quadrant " << endl;
    }
    else if (x == 0 && y == 0)
    {
        cout << "Both are same " << endl;
    }
    return 0;
}