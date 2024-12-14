#include<bits/stdc++.h>
using namespace std;
int find(int a[],int l,int m,int r){
	int sum=0,sum1=-1e9,sum2=-1e9;
	for(int i=m;i>=l;i--){
		sum+=a[i];
		sum1=max(sum,sum1);
	}
	sum=0;
	for(int i=m+1;i<=r;i++){
		sum+=a[i];
		sum2=max(sum,sum2);
	}
	return sum1+sum2;
}
int ln(int a[],int l,int r){
	if(l==r){
		return a[l];
	}
	int m=(l+r)/2;
	int left=ln(a,l,m);
	int right=ln(a,m+1,r);
	int c=find(a,l,m,r);
	return max(max(left,right),c);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<ln(a,0,n-1);
}
