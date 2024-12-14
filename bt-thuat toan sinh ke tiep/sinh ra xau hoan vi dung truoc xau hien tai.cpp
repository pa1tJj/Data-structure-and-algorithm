#include<bits/stdc++.h>
using namespace std;
// 1 2 3 5 4 ===> 1 2 3 4 5
// 1 2 4 5 7 3 6 8 9 ===> 1 2 4 5 6 9 8 7 3
bool kt=true;
void in(int x[],int n){
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
}
void khoi_tao(int x[],int n){
	for(int i=1;i<=n;i++){
		x[i]=n-i+1;
	}
}
void sinh(int x[],int n){
	int i=n-1;
	while(i>=1 && x[i]<x[i+1]){
		--i;
	}
	if(i==0){
		kt=false;
	}else{
		int j=n;
		while(x[i]<x[j]){
			--j;
		}
		swap(x[i],x[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(x[l],x[r]);
			++l;--r;
		}
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
