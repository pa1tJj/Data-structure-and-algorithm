#include<bits/stdc++.h>
using namespace std;
bool kt=true;
void in(int x[],int n){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
}
void khoi_tao(int x[],int n){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}
void sinh_xau_con_ke_tiep(int x[],int n,int k){
	int i=k;
	while(i>=1 && x[i]==n-k+i){
		--i;
	}
	if(i==0){
		kt=false;
	}else{
		x[i]+=1;
		for(int j=i+1;j<=k;j++){
			x[j]=x[j-1]+1;
		}
	}
}
int main(){
	int n,k;
	cin>>k>>n;
	int x[k];
	khoi_tao(x,k);
	while(kt){
		in(x,k);
		sinh_xau_con_ke_tiep(x,n,k);
		cout<<endl;
	}
}
