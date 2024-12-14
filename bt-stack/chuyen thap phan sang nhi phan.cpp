#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	stack<int> st;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(st.size()){
		cout<<st.top();
		st.pop();
	}
}
