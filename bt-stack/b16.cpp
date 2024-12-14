#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=INT_MIN;
	int i=0;
	stack<int> st;
	while(i<n){
		if(st.empty() || a[i]>=a[st.top()]){
			st.push(i);
			++i;
		}else{
			int index=st.top();
			st.pop();
			if(st.empty()){
				res=max(res,i*a[index]);
			}else{
				res=max(res,a[index]*(i-st.top()-1));
			}
		}
	}
	while(!st.empty()){
		int index=st.top();
		st.pop();
		if(st.empty()){
			res=max(res,i*a[index]);
		}else{
			res=max(res,a[index]*(i-st.top()-1));
		}
	}
	cout<<res;
}
