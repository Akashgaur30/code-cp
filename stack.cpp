#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int main(){
	stack <string> s;
	s.push("abc");
	s.push("bca");
	while(!s.empty()){
		cout << s.top()<< endl;
		s.pop();
	}
	
}