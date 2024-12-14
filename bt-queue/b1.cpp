#include<bits/stdc++.h>
using namespace std;
using ll=long long;
main(){
	string s;
	getline(cin,s);
	map<char,int> m;
	for(char x:s){
		m[x]++;
	}
	int k;
	cout<<"nhap k:";cin>>k;
	priority_queue<int> pq;
	for(auto it:m){
		pq.push(it.second);
	}
	while(k>0){
		int t=pq.top();
		--k;--t;
		pq.push(max(t,0));
	}
	ll sum=0;
	while(!pq.empty()){
		sum+=1ll*pq.top()*pq.top();
		pq.pop();
	}
	cout<<sum<<endl;
}
