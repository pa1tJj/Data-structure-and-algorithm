#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;cin>>n;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
    sort(a.begin(),a.end());
    int f[100];
    for(int i=0;i<n;i++){
    	f[i]=1;
    	for(int j=0;j<i;j++){
    		if(a[j].second<a[i].first && f[i]<=f[j]){
    			f[i]=f[j]+1;
			}
		}
	}
	cout<<f[n-1];
}

