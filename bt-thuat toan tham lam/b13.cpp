#include<bits/stdc++.h>
using namespace std;
int kt(int n,int m,int s){
	if(m*s>n*m){
		return -1;
	}else{
		int gt=0,dem=0;
		do{
			gt+=n;
			dem++;
		}while(gt<=m*s);
		return dem;
	}
}
int main(){
	int n,m,s;
	cin>>n>>m>>s;
	cout<<kt(n,m,s);
}
