#include<bits/stdc++.h>
using namespace std;
string tt="+-*/";
bool check(char c){
	for(int i=tt.size()-1;i>=0;i--){
		if(tt[i]==c){
			return 1;
		}
	}
	return 0;
}
bool var(char c){
	return (c>='a' && c<='z') || (c>='A' && c<='Z');
}
main(){
	string s,k,tmp;
	getline(cin,s);
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(check(s[i])){
			st.push(string(1,s[i]));
		}
		if(var(s[i])){
			k=s[i]+k;
		}
		if(s[i]=='('){
			k=st.top()+k;
			st.pop();
		}
	}
	while(!st.empty()){
		k=st.top()+k;
		st.pop();
	}
	tmp=k;
	string ex;
	for(int i=tmp.size()-1;i>=0;i--){
		if(check(tmp[i])){
			ex=st.top();
			st.pop();
			ex=ex+st.top()+tmp[i];
			st.pop();
			st.push(ex);
		}else{
			st.push(string(1,tmp[i]));
		}
	}
	cout<<st.top();
}
