#include <iostream>
using namespace std;
 
int main (){
     char chk ; 

     cout<<"Enter the Character to check it is Vowel OR a Consonant "<<endl;
     cin>>chk;

     if(chk == 'a' || chk == 'e' || chk == 'i'  || chk == 'o' ||  chk == 'u' )
     {
        cout<<"The entered character is Vowel.";
    }
    else 
    cout<<"The entered character is Consonant.";
 
 
    return 0;
}