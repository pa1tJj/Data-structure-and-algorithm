#include<bits/stdc++.h>
using namespace std;
void kt(int a[],int n){
	int s=0;
	vector<int> v;
	for(int i=0;i<n;i++){
		v.push_back(a[i]);
	}
	int tmp=0;
	while(v.size()!=0){
		sort(v.begin(),v.end());
		s=v[0]+v[1];
		tmp+=s;
		v.erase(v.begin(),v.begin()+2);
		if(v.size()!=0){
			v.push_back(s);
		}
		s=0;
	}	
	cout<<tmp;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	kt(a,n);
}
