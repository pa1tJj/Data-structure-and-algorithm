#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int l,int r,int x){
	if(l>=r)return -1;
	int m=(l+r)/2;
	if(a[m]<=x && a[m+1]>x){
		return m;
	}else if(x>a[m]){
		bs(a,m+1,r,x);
	}else{
		bs(a,l,m,x);
	}
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<bs(a,1,n,x);
}
