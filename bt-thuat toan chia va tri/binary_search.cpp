#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int l,int r,int x){
	if(l>=r)return -1;
	int m=(l+r)/2;
	if(a[m]==x){
		return 1;
	}else if(a[m]<x){
		binary_search(a,m+1,r,x);
	}else{
		binary_search(a,l,m,x);
	}
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<binary_search(a,0,n-1,x);
}
