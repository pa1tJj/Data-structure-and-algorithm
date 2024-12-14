#include<bits/stdc++.h>
using namespace std;
struct dt{
	int mu,hs;
};
void nhap(dt a[],int m){
	for(int i=0;i<m;i++){
		cin>>a[i].hs;
	}
}
void tich(dt a[],dt b[],int m,int n){
	vector<vector<dt> > v;
	for(int i=0;i<n;i++){
		a[i].mu=i;
	}
	for(int i=0;i<m;i++){
		b[i].mu=i;
	}
	for(int i=0;i<n;i++){
		vector<dt> tmp;
		for(int j=0;j<m;j++){
			tmp.push_back({a[i].hs*b[j].hs,a[i].mu+b[j].mu});
		}
		v.push_back(tmp);
	}
	int mu1=0;
	while(mu1<m+n-1){
		int hs1=0;
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				if(v[i][j].mu=mu1){
					hs1+=v[i][j].hs;
				}
			}
		}
		cout<<hs1<<" ";
		++mu1;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	dt a[n],b[m];
	nhap(a,n);
	nhap(b,m);
	tich(a,b,m,n);
}
