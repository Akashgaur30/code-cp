#include <bits/stdc++.h>
using namespace std;
void pr(vector<int> v){
	cout<< v.size()<< endl;
	for(int i=0;i<v.size();++i){
		cout<<"size"<< v[i]<<"    ";
	}
	cout<< endl;

}

int main (){
	
	vector<int> v;
	int n;
	cin >> n;
	for(int i= 0 ;i<n;++i){
		int x;
		cin >> x;
		pr(v);
		v.push_back(x);
	}
pr(v);

}