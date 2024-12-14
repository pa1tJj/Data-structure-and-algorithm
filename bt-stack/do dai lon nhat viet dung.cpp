#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	getline(cin,s);
	stack<char> st;
	int dem=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}else if(s[i]==')'){
			if(st.size() && st.top()=='('){
				st.pop();
				dem++;
			}else{
				break;
			}
		}
	}
	cout<<2*dem<<endl;
}
