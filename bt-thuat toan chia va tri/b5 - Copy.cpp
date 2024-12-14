#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long luy_thua(long long n,long long r){
	if(r==0)return 1;
	long long tmp=luy_thua(n,r/2);
	if(r%2==0){
		return (tmp*tmp)%mod;
	}else{
		return (((tmp*tmp)%mod)*n)%mod;
	}
}
int main(){
	long long n;cin>>n;
	long long m=n,r=0;
	while(m!=0){
		r=10*r+m%10;
		m/=10;
	}
	cout<<luy_thua(n,r);
}
