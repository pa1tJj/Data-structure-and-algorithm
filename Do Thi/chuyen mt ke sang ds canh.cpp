#include<bits/stdc++.h>
using namespace std;
main(){
	int a[100][100];
	int m,n;
	cout<<"nhap so hang,so cot:";cin>>m>>n;
	cout<<"nhap ma tran ke\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"danh sach canh\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1 && a[j][i]==1){
				if(i<j){
					cout<<i<<"\t"<<j<<endl;
				}
			}
		}
	}
}
