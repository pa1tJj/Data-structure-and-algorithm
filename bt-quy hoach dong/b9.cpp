#include<bits/stdc++.h>
using namespace std;
string dc(string s1,string s2){
	int f[100][100];
	for(int i=0;i<=s1.size();i++){
		f[i][0]=0;
	}
	for(int i=0;i<=s2.size();i++){
		f[0][i]=0;
	}
	for(int i=1;i<=s1.size();i++){
		for(int j=1;j<=s2.size();j++){
			if(s1[i]==s2[j]){
				f[i][j]=f[i-1][j-1]+1;
			}else{
				f[i][j]=max(f[i][j-1],f[i-1][j]);
			}
		}
	}
	cout<<f[s1.size()][s2.size()];
}
int main(){
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	cout<<dc(s1,dc(s2,s3));
}
