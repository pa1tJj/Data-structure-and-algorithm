#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	long long C[n];
	C[0]=1;
	long long s;
	for(int i=1;i<=n;i++){
	    s=0;
		for(int j=0;j<=i-1;j++){
			s+=C[j]*C[i-j-1];
		}
		C[i]=s;
	}
	cout<<"so catalan thu "<<n<<" la:"<<C[n];
}
