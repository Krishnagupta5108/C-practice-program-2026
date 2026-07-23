#include <iostream>
using namespace std;
 // Time second convert to minute and hour  


int main (){
    
    int s  ; 
float v ; 
    cout<<"Enter time in second ";
    cin>>s ; 
cout<<"The "<<s<<" in second is "<<s/60<<" minute."<<endl;
v = (s / 3600 ); 
cout << "The " << s << " in second is " << v<< " hour." << endl;

return 0;
}