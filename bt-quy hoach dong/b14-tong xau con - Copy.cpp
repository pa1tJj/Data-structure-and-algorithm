#include<bits/stdc++.h>
using namespace std;
main(){
	/* cach 1:
	string s;
	getline(cin,s);
	int f[100];
	int sum;
	for(int i=0;i<s.size();i++){
		sum=0;
		for(int j=i;j<s.size();j++){
			sum+=stoi(s.substr(i,j-i+1));
		}
		if(i==0){
		    f[i]=sum;
		}
		if(i>0){
			f[i]=f[i-1]+sum;
		}
		
	}
	cout<<f[s.size()-1];
	*/
	//cach 2:
	string s;
	getline(cin,s);
	int f[100];
	f[0]=s[0]-'0';
	int sum;
	for(int i=1;i<s.size();i++){
		sum=0;
		for(int j=0;j<=i;j++){
			for(int k=j;k<=i;k++){
				sum+=stoi(s.substr(j,k-j+1));
			}
		}
		f[i]=sum;
	}
	for(int i=0;i<s.size();i++){
		cout<<f[i]<<" ";
	}
}
