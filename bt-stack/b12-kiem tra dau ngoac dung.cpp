#include<bits/stdc++.h>
using namespace std;
main(){
	string s,k;
	getline(cin,s);
	stack<char> st;
	int ok=1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			st.push(s[i]);
		}else if(s[i]==')'){
			if(st.size() && st.top()=='('){
				st.pop();
			}else{
				ok=0;
				break;
			}
		}else if(s[i]==']'){
			if(st.size() && st.top()=='['){
				st.pop();
			}else{
				ok=0;
				break;
			}
		}else{
			if(st.size() && st.top()=='{'){
				st.pop();
			}else{
				ok=0;
				break;
			}
		}
	}
	if(ok==1){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
