#include<bits/stdc++.h>
using namespace std;
int x[100],n;
void in(){
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
}
void xau(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			in();
		}else{
			xau(i+1);
		}
	}
}
int main(){
	cin>>n;
	xau(1);
}