#include<bits/stdc++.h>
using namespace std;
int a[100][100]={0};
int X[8]={-2,-2,-1,-1,1,1,2,2};
int Y[8]={-1,1,-2,2,-2,2,-1,1};
int n,dem=0;
void in(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void di_ma(int x,int y){
	dem++;
	a[x][y]=dem;
	for(int i=0;i<8;i++){
		if(dem==n*n){
			in();
			exit(0);
		}
		int u=x+X[i];
		int v=y+Y[i];
		if(u>=0 && u<n && v>=0 && v<n && a[u][v]==0){
			di_ma(u,v);
		}
	}
	--dem;
	a[x][y]=0;
}
int main(){
	cin>>n;
	int a,b;
	cout<<"nhap o bat dau di:";cin>>a>>b;
	di_ma(a,b);
}
