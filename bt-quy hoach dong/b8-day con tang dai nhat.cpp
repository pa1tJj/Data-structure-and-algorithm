#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int f[1000];
	for(int i=0;i<n;i++){
		f[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				f[i]=max(f[i],f[j]+1);
			}
		}
	}
//    vector<int> f(n,1);
//    for(int i=0;i<n;i++){
//   	    for(int j=0;j<i;j++){
//   		    if(a[i]>a[j]){
//   			    f[i]=max(f[i],f[j]+1);
//		    }
//	    }
//    }
//    cout<<*max_element(f.begin(),f.end());//tro den gia tri lon nhat trong 1 container
	//(*min_element(vt dau,vt cuoi) ---> tro den vi tri nho nhat trong 1 container
}
