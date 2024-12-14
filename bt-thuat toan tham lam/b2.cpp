#include<bits/stdc++.h>
using namespace std;
int bai_toan(int a[],int n){
	sort(a,a+n);
	int s1=0,s2=0;
	int i=0;
	vector<int> v1;
	vector<int> v2;
	while(i<n){
		if(i%2==0){
			v1.push_back(a[i]);
		}else{
			v2.push_back(a[i]);
		}
		++i;
	}
	for(int i=0;i<v1.size();i++){
		s1+=v1[i]*pow(10,v1.size()-i-1);
	}
	for(int i=0;i<v2.size();i++){
		s2+=v2[i]*pow(10,v2.size()-i-1);
	}
	return s1+s2;
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<bai_toan(a,n);
}
