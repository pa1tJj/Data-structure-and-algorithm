#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	queue<int> q;
	for(int i=1;i<=n;i++){
		while(i!=0){
			q.push(i%2);
			i/=2;
		}	
	}
	while(!q.empty()){
		cout<<q.front();
		q.pop();
	}
}
