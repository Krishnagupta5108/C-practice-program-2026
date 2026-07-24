#include <iostream>
using namespace std;

// Print number from 1 to N

class printing
{

    int a;

public:
    void Print()
    {

        cout << "Enter the value N  to print multipication table of  N" << endl;
        cin>>a ;
        cout << "The multipication table of  N is" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << i*a << endl;
        }
    }
};
int main()
{
    printing p;
    p.Print();

    return 0;
}