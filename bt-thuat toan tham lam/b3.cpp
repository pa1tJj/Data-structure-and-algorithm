#include<bits/stdc++.h>
using namespace std;
void sx(int f[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(f[j]<f[i]){
				swap(f[i],f[j]);
			}
		}
	}
}
void greedy(int a[],int n,int k){
	int s1=0,s2=0,j=0;
	sort(a,a+n);
	while(j<n){
		if(j<k){
			s1+=a[j];
		}else{
			s2+=a[j];
		}
		++j;
	}
	int kt=abs(s1-s2);
	j=0,s1=0,s2=0;
	while(j<n){
		if(j<n-k){
			s1+=a[j];
		}else{
			s2+=a[j];
		}
		++j;
	}
	cout<<max(kt,abs(s1-s2));
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	greedy(a,n,k);
}
