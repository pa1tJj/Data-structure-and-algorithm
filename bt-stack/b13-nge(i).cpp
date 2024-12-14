#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int> st;
	vector<int> b(n,-1);
	for(int i=0;i<n;i++){
		while(!st.empty() && a[i]>a[st.top()]){
			b[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	for(int i=0;i<n;i++){
		if(b[i]==-1){
			cout<<b[i]<<" ";
		}else{
			cout<<a[b[i]]<<" ";
		}
	}
}
