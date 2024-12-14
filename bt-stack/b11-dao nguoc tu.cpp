#include<bits/stdc++.h>
using namespace std;
bool var(char c){
	return (c>='a' && c<='z') || (c>='A' &&c<='Z');
}
main(){
	string s;
	getline(cin,s);
	stack<char> st;
	s+=" ";
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			st.push(s[i]);
		}else if(s[i]==' '){
			while(!st.empty()){
		        cout<<st.top();
		        st.pop();
	        }
	        cout<<" ";
		}		
	}
}
