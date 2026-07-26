#include <iostream>
using namespace std;

// Print number from 1 to N

class printing
{

    int a;
    int temp , rem ;


public:
    void Print()
    {

        cout << "Enter the value N  to print reversed of it " << endl;
        cin >> a;
        cout << "The revered  of  N is" << endl;
        temp = a ; 
          cout<<a<<endl;
          
        while (a <0)
        {
            rem = a % 10 ;  //    
            cout<<rem;

        }
        

    }
};
int main()
{
    printing p;
    p.Print();

    return 0;
}