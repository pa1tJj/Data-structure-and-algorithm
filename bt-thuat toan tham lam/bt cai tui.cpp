#include<bits/stdc++.h>
using namespace std;
main(){
	int n,w;
	cin>>n>>w;
	int a[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(c[i]<c[j]){
				swap(c[i],c[j]);
				swap(a[i],a[j]);
			}
		}
	}
	int sum=0;
	int i=0;
	int gt=0;
	while(i<n){
		gt+=a[i];
		if(gt<w){
		    sum+=c[i];
			++i;
		}else{
			gt-=a[i];
		    ++i;
		}
	}
	cout<<sum;
}
