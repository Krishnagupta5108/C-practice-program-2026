#include <iostream>
using namespace std;
 
// Print number from 1 to N

class printing {

int a ; 
public :

void Print(){

    cout <<"Enter the value N  to print from 1 to N"<<endl ;

    for (int  i = 0; i <= a; i++)
    {
        cout<<a<<endl;
    }
    
}


};
int main (){
    printing p ;
    p.Print() ;
    
 
 
 
    return 0;
}