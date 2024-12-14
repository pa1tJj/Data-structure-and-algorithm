#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
main(){
	int n;cin>>n;
	int s[n],f[n];
	nhap(s,n);
	nhap(f,n);
	sort(f,f+n);
}
