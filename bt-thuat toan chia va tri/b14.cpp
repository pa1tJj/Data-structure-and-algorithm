#include<bits/stdc++.h>
using namespace std;
int gt(int a[],int n){
	int dem=0;
	int i=n-1;
	while(a[i]!=1){
		dem++;
		--i;
	}
	return dem;
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<gt(a,n);
}
