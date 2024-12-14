#include<bits/stdc++.h>
using namespace std;
int kt(int a[],int b[],int l,int r){
	int m=(l+r)/2;
	if(a[m]!=b[m]){
		return m;
	}else{
		kt(a,b,m,r);
	}
}
int main(){
	int n;cin>>n;
	int a[n],b[n-1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>b[i];
	}
	cout<<kt(a,b,0,n-1);
}
