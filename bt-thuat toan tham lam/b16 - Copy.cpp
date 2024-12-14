#include<bits/stdc++.h>
using namespace std;
int kt(string s){
	int n=s.length();
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			if(i==n){
				for(int j=n-1;j>=0;j--){
					if(s[i]!=s[j]){
						swap(s[i],s[j]);
						break;
					}
				}
			}else{
				for(int j=i+1;j<n;j++){
				    if(s[j]!=s[i]){
					    swap(s[i],s[j]);
					    break;
				    }
			    }
			}			
		}
	}
	bool kt;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]){
			kt=true;
			break;
		}
	}
	if(kt==true){
		return -1;
	}else{
		return 1;
	}
}
int main(){
	string s; 
	getline(cin,s);
	cout<<kt(s);
}
