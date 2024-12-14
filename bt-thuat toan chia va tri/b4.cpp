#include<bits/stdc++.h>
using namespace std;
int dem=0;
void mer(int a[],int l,int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	do{
		if(x[i]>y[j]){
			dem++;
		}
		++j;
		if(j==y.size()){
			++i;
			j=0;
		}
		
	}while(i<x.size() && j<y.size());
}
void cap(int a[],int l,int r){
	if(l>=r)return;
	int m=(l+r)/2;
	cap(a,l,m);
	cap(a,m+1,r);
	mer(a,l,m,r);
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cap(a,0,n-1);
	cout<<dem;
}
