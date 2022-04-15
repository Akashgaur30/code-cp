
#include <iostream>
using namespace std;

int main()
{
    int t; // your code goes here
    cin >> t;
    while (t--)
    {
        int M,H,ans;
        cin>>M>>H;
        ans=M/H*H;
        	if(ans<=18)
	cout<<"1"<<endl;
	else if(ans>=19 && x<=24)
	cout<<"2"<<endl;
	else if(ans>=25 && x<=29)
	cout<<"3"<<endl;
	else if(ans>=30)
	cout<<"4"<<endl;
	else
	cout<<"wrong input"<<endl;
	}
    return 0;
}