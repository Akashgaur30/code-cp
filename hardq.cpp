

#include <iostream>
using namespace std;

int main()
{
    int t; // your code goes here
    cin >> t;
    while(t--)
    {
        int A, B, C;
        cin >>A>>B>>C;
        
        if( A < B && A < C){cout<<"Draw"<<endl;}
    else if(B < C){cout<<"Bob"<<endl;}
    else{
    cout<<"Alice"<<endl;
}}
    return 0;
}
