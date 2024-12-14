#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(--t){
		string s;
		cin.ignore();
		getline(cin,s);
		stack<char> st;
		int ok=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
				st.push(s[i]);
			}else if(s[i]==')'){
				if(st.top()=='('){
					st.pop();
				}
			}else if(s[i]==']'){
				if(st.top()=='['){
					st.pop();
				}
			}else if(s[i]=='}'){
				if(st.top()=='{'){
					st.pop();
				}
			}
		}
		if(st.empty()){
			cout<<"yes";
		}else{
			cout<<"no";
		}
	}
}
