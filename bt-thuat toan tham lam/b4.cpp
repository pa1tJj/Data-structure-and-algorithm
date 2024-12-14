#include<bits/stdc++.h>
using namespace std;
int daonguoc(int a[],int n){
	int l=0,r=n-1;
	while(l<=r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l;--r;
	}
}
void kt(int a[],int n){
	int b[n];
	int i=0,j=0;
	while(j<n){
		b[j]=a[i];
		++i;++j;
	}
	sort(b,b+n);
	int l=0,r=n-1;
	bool check;
	while(l<=r){
		if(a[l]==b[r] && a[r]==b[l] || a[l]==b[l] && a[r]==b[r]){
			++l;--r;
			check=true;
		}else{
			check=false;
		}
	}
	if(check==true){
		cout<<"yes";
	}else if(check==false){
		cout<<"no";
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	kt(a,n);
}
