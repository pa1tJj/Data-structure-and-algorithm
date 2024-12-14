#include<bits/stdc++.h>
using namespace std;
bool kt=true;
int cnt;
void khoi_tao(int x[],int n){
	cnt=1;
	x[1]=n;
}
void sinh(int x[],int n){
	int i=cnt;
	while(i>=1 && x[i]==1){
		--i;
	}
	if(i==0){
		kt=false;
	}else{
		x[i]--;
		int d=cnt-i+1;
		cnt=i;
		int q=d/x[i];
		int r=d%x[i];
		if(q){
			for(int j=1;j<=q;j++){
				++cnt;
				x[cnt]=x[i];
			}
		}
		if(r){
			++cnt;
			x[cnt]=r;
		}
	}
	
}
int main(){
	int n;
	cin>>n;
	int x[n];
	khoi_tao(x,n);
	while(kt){
		for(int i=1;i<=cnt;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
		sinh(x,n);
	}
}
