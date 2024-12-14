#include<bits/stdc++.h>
using namespace std;
bool kt=true;
int dem=1;
void khoi_tao(int x[],int n){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}
void in(int x[],int n){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
}
void sinh(int x[],int n){
	int i=n-1;
	while(i>=1 && x[i]>x[i+1]){
		--i;
	}
	if(i==0){
		kt=false;
	}else{
		int j=n;
		while(x[i]>x[j]){
			--j;
		}
		swap(x[i],x[j]);
		reverse(x+i+1,x+n+1);
	}
}
int main(){
	int n;
	cin>>n;
	int x[n];
	khoi_tao(x,n);
	while(kt){
		cout<<dem++<<":";
		in(x,n);
		sinh(x,n);
		cout<<endl;
	}
}
