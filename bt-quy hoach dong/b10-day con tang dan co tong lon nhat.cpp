#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int f[1000];
	for(int i=0;i<n;i++){
		f[i]=a[i];
	}
	int res=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				f[i]=max(f[i],f[j]+a[i]);
			}
		}
		res=max(res,f[i]);
	}
	cout<<res;
}
