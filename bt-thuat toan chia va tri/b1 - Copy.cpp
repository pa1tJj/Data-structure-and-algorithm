#include<bits/stdc++.h>
using namespace std;
int tk(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(x==a[m]){
			return 1;
		}else if(x>a[m]){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return -1;
}
int main(){
	int x,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"nhap x:";cin>>x;
	cout<<tk(a,n,x);
}
