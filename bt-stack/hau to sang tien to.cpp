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
	string k,s,tmp;
	getline(cin,s);
	stack<string> st;
	for(int i=0;i<s.size();i++){
		if(check(s[i])){
			k=s[i]+st.top();
			st.pop();
			k='('+st.top()+k+')';  
			st.pop();
			st.push(k);
		}else{
			st.push(string(1,s[i]));
		}
	}
	tmp=st.top();
	string ex;
	st.pop();
	for(int i=tmp.size()-1;i>=0;i--){
		if(check(tmp[i])){
			st.push(string(1,tmp[i]));
		}
		if(var(tmp[i])){
			ex=tmp[i]+ex;
		}
		if(tmp[i]=='('){
			ex=st.top()+ex;
			st.pop();
		}
	}
	while(!st.empty()){
		ex=st.top()+ex;
		st.pop();
	}
	cout<<ex;
}
