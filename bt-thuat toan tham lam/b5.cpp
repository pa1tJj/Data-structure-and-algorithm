#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a<b?b:a;
}
void kt(int a[],int b[],int n){
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	int s=0;
	for(int i=0;i<n;i++){
		s+=a[i]*b[i];
	}
	cout<<s;
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int n;cin>>n;
	int a[n],b[n];
	nhap(a,n);
	nhap(b,n);
	kt(a,b,n);
}
