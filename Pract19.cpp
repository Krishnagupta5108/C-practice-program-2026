#include <iostream>
using namespace std;

int main()
{
    int a;
    char(a);

    cout << "Enter your character according to you score : \n 'a' for more than 80 \n 'b' for more than 60 and less than 80  \n 'c' for more than 40  and less than 60 \n 'd' for less than 40   " << endl;
    cin >> a;

    switch (a)
    {
    case 'a':
        cout << "Congratulation!, You got A grade.";
        break;

    case 'b':
        cout << "Great, You got B grade.";
        break;

    case 'c':

        cout << "Better try next time, You got C grade.";
        break;

    case 'd':
        cout << "Give your best next time, You got D grade.";
        break;

    default:
        break;
    }

    return 0;
}