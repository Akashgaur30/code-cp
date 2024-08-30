#include <iostream>
using namespace std;

int main()
{
    int t; // your code goes here
    cin >> t;
    while (t--)
    {
        int A, B, X, Q ,P;
        cin >>A>>B>>X>>Q;
        P=(X/A)+(Q/B);
            cout<<P<<endl;
    }
    return 0;
}