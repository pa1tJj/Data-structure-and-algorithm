#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	vector<char> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	stack<char> sa;
	stack<char> sb;
	for(int i=v.size()-1;i>=0;i--){
		sa.push(v[i]);
		v.erase(v.begin()+i);
		char m=v[0];
		int vt=0;
		for(int j=1;j<i;j++){
			if(v[j]<m){
				m=v[j];
				vt=j;
			}
		}
		sb.push(m);
		v.erase(v.begin()+vt);
	}
	while(!sa.empty()){
		cout<<sa.top()<<" ";
		sa.pop();
	}
	while(!sb.empty()){
		cout<<sb.top()<<" ";
		sb.pop();
	}
}

