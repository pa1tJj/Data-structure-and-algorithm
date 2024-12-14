#include<bits/stdc++.h>
using namespace std;
int tichnp(string s1,string s2){
	int p1=1,p2=1;
	for(int i=0;i<s1.size();i++){
		p1*=s1[i]-'0';
	}
	for(int i=0;i<s2.size();i++){
		p2*=s2[i]-'0';
	}
	return p1*p2;
}
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout<<tichnp(s1,s2);
}
