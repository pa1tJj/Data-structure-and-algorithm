#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int vt=0;
	int m=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>m){
			vt=i;
		}
	}
	int f[100];
	int res=0,tmp=0;
	for(int i=0;i<vt+1;i++){
		f[i]=a[i];
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				f[i]=max(f[i],f[j]+a[i]);
			}
		}
		res=max(res,f[i]);
	}
	for(int i=vt+1;i<n;i++){
		f[i]=a[i];
		for(int j=vt+1;j<i;j++){
			if(a[i]<a[j]){
				f[i]=max(f[i],f[j]+a[i]);
			}
		}
		tmp=max(tmp,f[i]);
	}
	cout<<res+tmp;
}
