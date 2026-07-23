 #include <iostream>
 using namespace std;
  
 int main (){
     char arg ; 
     cout<<"Enter 'A' for Alphabet , ' D ' for digit  and 'S ' for special character :  "<<endl;
     cin>>arg;

    switch (arg)
    {
    case 'A':
    char a ; 
        cout<<"Enter any Alphabet :"<<endl;
        cin>>a;
        break;
    
    case 'D':
    int x ; 
        cout<<"Enter any Digit :"<<endl;
        cin>>x;
        break;
    
    // case 'S':     for special character i unaware about the data type to store it 
     
    //     cout<<"Enter any Special Character : "<<endl;
    //     cin>>;
    //     break;
    
        

    default:

    // cout<<"Invalid option ";
        break;
    }
  
  
  
    return 0;
 }