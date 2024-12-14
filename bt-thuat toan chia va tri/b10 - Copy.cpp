#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int r,int x){
	if(l>=r)return -1;
	int m=(l+r)/2;
	if(x==a[m]){
		return m+1;
	}else if(x>a[m]){
		binary(a,m+1,r,x);
	}else{
		binary(a,l,m,x);
	}
}
void sx_2_mang(int a[],int b[],int m,int n,int x){
	int i=0,j=0,vt=0;
	int c[m+n];
	while(i<m){
		if(a[i]<=b[j]){
			c[vt]=a[i];
			++i;++vt;
		}else{
			c[vt]=b[j];
			++j;++vt;
		}
	}
	while(i<m){
		c[vt]=a[i];
		++i;++vt;
	}
	while(j<n){
		c[vt]=b[j];
		++j;++vt;
	}
	cout<<binary(c,0,(n+m)-1,x);
}
int main(){
	int n,m;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int x;cin>>x;
	sx_2_mang(a,b,m,n,x);
}

