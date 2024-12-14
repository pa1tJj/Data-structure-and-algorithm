#include<bits/stdc++.h>
using namespace std;
int kt(string s,int d){
	sort(s.begin(),s.end());
	int tmp=1,res;
	int i=0;
	while(i<s.length()){
		if(s[i]==s[i+1]){
			tmp++;
			if(tmp>res){
				res=tmp;
			}
		}else{
			tmp=1;
		}
		++i;
	}
	if(res==d){
		return 1;
	}else{
		return -1;
	}
}
int main(){
	string s;
	getline(cin,s);
	int d;
	cin>>d;
	cout<<kt(s,d);
}
