#include<bits/stdc++.h>
using namespace std;
void kt(int t,int m){
	while(1){
		if(m%t==0){
			cout<<1<<"/"<<m/t<<endl;
			break;
		}else{
			float res;
			res=(m/t)+1;
			cout<<1<<"/"<<res<<"+";
			t=t*res-m;
			m=m*res;
		}
	}
}
int main(){
	int t,m;
	cin>>t>>m;
	kt(t,m);
}
