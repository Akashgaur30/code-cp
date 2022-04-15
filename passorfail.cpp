#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	while(t--)
	{
	    int ans,n,x,p;
	    cin >> n >> x >> p;
	 ans=(x*3)+((n-x)*(-1));
	 if (ans>p)
	 {
	 	cout<<"PASS"<<endl;
	 }
	 else
	 	{
	 		cout<<"FAIL"<<endl;
	 	}  
	}
	return 0;
}
