#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter the value of the x :" << endl;
    cin >> x;

    cout << "Enter the value of the y :" << endl;
    cin >> y;

    cout << "Enter the value of the z :" << endl;
    cin >> z;

    cout << "The value of the x :" << x << endl;
    cout << "The value of the y :" << y << endl;
    cout << "The value of the z :" << z << endl
         << endl;

    if (x < y && x < z)
    {
        cout << "The value of the x " << x << " is Smallesst. ";
    }
    else if (z < y)
    {
        cout << "The value of the z " << z << " is Smallesst. ";
    }
    else

        cout << "The value of the y " << y << " is Smallesst. ";

    return 0;
}