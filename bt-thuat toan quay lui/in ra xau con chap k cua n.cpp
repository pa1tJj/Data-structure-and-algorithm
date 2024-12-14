#include<bits/stdc++.h>
using namespace std;
int x[100],n,k;
void in(){
	for(int i=1;i<=k;i++){
		cout<<x[i];
	}
	cout<<endl;
}
void ql(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			in();
		}else{
			ql(i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	ql(1);
}
