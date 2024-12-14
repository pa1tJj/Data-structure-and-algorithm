#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6){
		return n;
	}
	set<long long> s;
	s.insert(1);
	--n;
	while(n){
		auto it=s.begin();
		long long int x=*it;
		s.erase(it);
		s.insert(x*2);
		s.insert(x*3);
		s.insert(x*5);
		--n;
	}
	cout<<*s.begin();
}
