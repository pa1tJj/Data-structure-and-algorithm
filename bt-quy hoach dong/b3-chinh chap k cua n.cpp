#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int p[100][100];
	int s;
	for(int i=0;i<=n;i++){
		p[i][1]=i;
		p[i][0]=1;
	}
	for(int i=0;i<=n;i++){
		for(int j=2;j<=k;j++){
			if(i<j){
				p[i][j]=0;
			}else{
				p[i][j]=p[i-1][j-1]*i;
			}
		}
	}
	cout<<"gia tri cua p["<<n<<","<<k<<"]:"<<p[n][k];
}
