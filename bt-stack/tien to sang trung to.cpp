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
main(){
	string s,k;
	getline(cin,s);
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(check(s[i])){
			k='('+st.top();
			st.pop();
			k+=s[i];
			k=k+st.top()+')';
			st.pop();
			st.push(k);
		}else{
			st.push(string(1,s[i]));
		}
	}
	cout<<st.top();
}
