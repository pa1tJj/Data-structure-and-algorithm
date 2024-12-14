#include<bits/stdc++.h>
using namespace std;
//tu danh sach canh sang ma tran ke;
int n,m;
int a[100][100];
main(){
	cout<<"nhap vao so dinh va so canh cua do thi:";cin>>n>>m;
	cout<<"nhap vao dinh dau,dinh cuoi\n";
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=a[y][x]=1;
		
	}
	cout<<"ma tran ke la\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}


