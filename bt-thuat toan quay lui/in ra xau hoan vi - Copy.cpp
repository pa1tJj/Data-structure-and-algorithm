#include<bits/stdc++.h>
using namespace std;
int x[100],n,k,u[100];
void in(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(u[j]==0){
			x[i]=j;
			u[j]=1;
			if(i==n){
				in();
			}else{
				ql(i+1);
			}
			u[j]=0;
		}
	}
}
int main(){
	cin>>n;
	ql(1);
}
