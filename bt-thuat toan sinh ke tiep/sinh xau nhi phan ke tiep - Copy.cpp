#include<bits/stdc++.h>
using namespace std;
bool kt=true;
int dem=0;
void khoi_tao(int x[],int n){
	for(int i=0;i<n;i++){
		x[i]=0;
	}
}
void in(int x[],int n){
	cout<<dem++<<":";
	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
}
void sinh(int x[],int n){
	int i=n-1;
	while(i>=0 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i<0){
		kt=false;
	}else if(x[i]==0){
		x[i]=1;
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
		cout<<endl;
	}
}
