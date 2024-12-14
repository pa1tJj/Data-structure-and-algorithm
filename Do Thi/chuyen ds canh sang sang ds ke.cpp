#include<bits/stdc++.h>
using namespace std;
main(){
	int m,n;
	vector<int> cmp[100];
	cout<<"nhap so dinh,so canh:";cin>>n>>m;
	cout<<"nhap dinh dau,dinh cuoi\n";
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		cmp[x].push_back(y);
		cmp[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<":";
		for(int x:cmp[i]){
			cout<<x<<"\t";
		}
		cout<<endl;
	}
}

