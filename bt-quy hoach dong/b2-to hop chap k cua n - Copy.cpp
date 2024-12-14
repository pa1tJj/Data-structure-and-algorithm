#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k,c[100][100];
	cin>>n>>k;
	for(int i=0;i<=n;i++){
		c[i][0]=1;
		c[i][1]=i;
	}
	for(int i=0;i<=n;i++){
		for(int j=2;j<=k;j++){
			if(j>i){
				c[i][j]=0;
			}else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
		}
	}
	cout<<"to hop C["<<n<<","<<k<<"]="<<c[n][k];
}
