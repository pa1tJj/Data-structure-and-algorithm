#include<bits/stdc++.h>
using namespace std;
int quick(int a[],int l,int r){
	int k=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<=k){
			++i;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
	return i;
}
void sx(int a[],int l,int r){
	if(l>r)return;
	int p=quick(a,l,r);
	sx(a,l,p-1);
	sx(a,p+1,r);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sx(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
