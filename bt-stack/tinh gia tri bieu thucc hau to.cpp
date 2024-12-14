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
	return (c>='1' && c<='9');
}
main(){
	string s;
	getline(cin,s);
	stack<int> st;
	int kq;
	for(int i=0;i<s.size();i++){
		if(check(s[i])){
			if(s[i]=='+'){
				kq=st.top();
				st.pop();
				kq=st.top()+kq;
				st.pop();
				st.push(kq);
			}else if(s[i]=='-'){
				kq=st.top();
				st.pop();
				kq=st.top()-kq;
				st.pop();
				st.push(kq);
			}else if(s[i]=='*'){
				kq=st.top();
				st.pop();
				kq=st.top()*kq;
				st.pop();
				st.push(kq);
			}else if(s[i]=='/'){
				kq=st.top();
				st.pop();
				kq=st.top()/kq;
				st.pop();
				st.push(kq);
			}
		}else if(var(s[i])){
			st.push(s[i]-'0');
		}
	}
	cout<<st.top();
}
