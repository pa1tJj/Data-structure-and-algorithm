#include<bits/stdc++.h>
using namespace std;
//thuc hien bo di k lan ki tu,dua ra tong binh phuong ki tu con lai
//vd: ABCCBC,k=2 ===>ABCC,sum=6 hoac AAAB,k=2 ===>AB,sum=2
using ll=long long;
main(){
	string s;
	getline(cin,s);
	map<char,int> m;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	int k;cin>>k;
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
		sum+=pq.top()*pq.top();
		pq.pop();
	}
	cout<<sum;
}
