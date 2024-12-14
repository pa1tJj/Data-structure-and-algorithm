#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	vector<pair<int,int>> xxx;
	cout<<"nhap so dinh";cin>>n;
	int a[100][100];
	cout<<"nhap ma tran ke\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		cout<<i<<":";
		for(int j=1;j<=n;j++){
			if(a[i][j]==1 && i<j){
				xxx.push_back(j);
				xxx.push_back(i);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<i<<":";
		for(int x:xxx[j]){
			cout<<x<<"\t";
		}
		cout<<endl;
	}
}
