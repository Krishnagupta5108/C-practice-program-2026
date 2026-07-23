#include <iostream>
using namespace std;
 
int main (){
    int a , b , temp ; 
cout<<"Enter to number : "<<endl;
cin>>a >> b; 

 cout<<"Before swapping a ="<<a <<"and b = "<<b<<endl;
 
 // swapping with third varibale
 temp = a ; 
 a = b  ; 
 b = temp ; 
 cout<<"After  swapping a ="<<a <<"and b = "<<b<<endl;
 
 // swapping without third varibale
a = a + b ; 
b = a - b ; 
a = a - b ;  
                    


    return 0;
}