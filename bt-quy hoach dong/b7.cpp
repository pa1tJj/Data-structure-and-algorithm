#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	getline(cin,s);
	int f[100];
	int d=0,tmp=0;
	f[0]=0;
	for(int i=1;i<s.size();i++){
		if(s[i]!=s[i-1]){
			f[i]=0;
		}else{
			f[i]=f[i-1]+1;
		}
	}
	cout<<*max_element(f+0,f+s.size());
}
