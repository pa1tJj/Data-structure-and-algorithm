#include<bits/stdc++.h>
using namespace std;
bool kt=true;
void khoi_tao(int x[],int n){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}
void sinh(int x[],int n){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0){
		kt=false;
	}else if(i>0 && x[i]==0){
		x[i]=1;
	}
}
int main(){
	int n;
	cin>>n;
	int x[n];
	khoi_tao(x,n);
	while(kt){
		for(int i=1;i<=n;i++){
			if(x[i]==0){
				cout<<"A";
			}else if(x[i]==1){
				cout<<"B";
			}
		}
		sinh(x,n);
		cout<<endl;
	}
}
