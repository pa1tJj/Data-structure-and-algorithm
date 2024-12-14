#include<bits/stdc++.h>
using namespace std;
int cnt[1000]={0};
main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int ans[n];
	stack<int> st;
	for(int i=n-1;i>=0;i--){
        while(st.size() && cnt[st.top()]<=cnt[a[i]]){
        	st.pop();
		}
        if(st.empty()){
        	ans[i]=-1;
		}else{
			ans[i]=st.top();
		}
        st.push(a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
	}
}
