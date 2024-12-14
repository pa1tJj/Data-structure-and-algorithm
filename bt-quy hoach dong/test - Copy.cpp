#include<bits/stdc++.h>
using namespace std;
main(){
	int  f[100][100],n,m,v;
	cin>>n;
	for(int j=1;j<=n;j++){
		f[0][j]=0;
	}
	f[0][0]=1;
	for(m=1;m<=n;m++){
		for(v=0;v<=n;v++){
			if(m>v){
				f[m][v]=f[m-1][v];
			}else{
				f[m][v]=f[m-1][v]+f[m][v-m];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<v;j++){
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nket qua:"<<f[n][n];
}
