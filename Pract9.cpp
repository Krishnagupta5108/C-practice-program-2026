#include <iostream>
using namespace std;

int main (){
int a , b ,c ; 
float x , y , z ; 

cout<<"Enter three float "<<endl;
cin>>x>>y>>z;

cout<<"Enter three Integer "<<endl;
cin>>a>>b>>c;


cout << "\n\nYour Integer before the Typecasting are  :" ;
cout<<"\n\t1. "<<a;
cout<<"\n\t2. "<<b;
cout<<"\n\t3. "<<c;

cout << "\n\nYour Integer after the Typecasting are :" << endl;
cout<<"\n\t1. "<<double(a);
cout<<"\n\t2. "<<double(b); // IMPLICIT TYPECASTING 
cout<<"\n\t3. "<<double(c);

cout << " \n\nYour Float before Typecasting are :" << endl;
cout<<"\n\t1. "<<x;
cout<<"\n\t2. "<<y;
cout<<"\n\t3. "<<z;


cout<<"\n\nYour Float after  Typecasting are :"<<endl;
cout<<"\n\t1. "<<(int)x;
cout << "\n\t2. " << (int)y; // IMPLICIT TYPECASTING
cout<<"\n\t3. "<<(int)z;



    
    return 0;
}



























