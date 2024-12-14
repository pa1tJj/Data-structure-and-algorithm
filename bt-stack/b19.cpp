#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	getline(cin,s);
	stack<char> st;
	int dem=0;
	for(int i=0;i<s.size();i++){
		if(st.empty() && s[i]=='}'){
			st.push(s[i]);
		}else if(s[i]=='{'){
			st.push(s[i]);
		}else if(!st.empty() && st.top()=='{'){
			st.pop();
		}
	}
	if(st.empty()){
		cout<<"0"<<endl;
	}else if(st.size()%2==0){
		cout<<st.size()/(2);
	}else if(st.size()%2!=0){
		cout<<"-1";
	}
}
