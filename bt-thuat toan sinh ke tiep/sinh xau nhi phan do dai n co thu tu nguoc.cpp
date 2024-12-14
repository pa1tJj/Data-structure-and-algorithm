#include<bits/stdc++.h>
using namespace std;
bool kt=true;
void khoi_tao(int x[],int n){
	for(int i=1;i<=n;i++){
		x[i]=1;
	}		
}
void in(int x[],int n){
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
}
void sinh(int x[],int n){
	int i=n;
	while(i>0 && x[i]==0){
		x[i]=1;
		--i;
	}
	if(i==0){
		kt=false;
	}else if(i>0 && x[i]==1){
		x[i]=0;
	}
}
int main(){
	int n;
	cin>>n;
	int x[n];
	khoi_tao(x,n);
	while(kt){
		in(x,n);
		sinh(x,n);
	}
}
