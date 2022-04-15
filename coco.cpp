#include <iostream>
using namespace std;

int main()
{
    int t; // your code goes here
    cin >> t;
    while (t-->0)
    {
        int A, B, C;
        cin >>A>>B>>C;
        
        if(B>C){cout<<"Alice"<<endl;}
    else if(B>A){cout<<"Draw"<<endl;}
     else if(A>C){cout<<"Alice"<<endl;} 
     else if(A>B){cout<<"Bob"<<endl;}
     else if(C>B){cout<<"Bob"<<endl;}
    else(C>A){cout<<"Draw"<<endl;}
}
    return 0;
}
