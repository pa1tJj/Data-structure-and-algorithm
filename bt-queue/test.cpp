#include<bits/stdc++.h>
using namespace std;
main(){
	queue<int> q;
	q.push(100);
	q.push(40);
	q.emplace(99);
	q.emplace(14);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	priority_queue<int> pq;
	pq.push(5);
	pq.push(3);
	pq.push(19);
	cout<<pq.top();
	pq.push(33);
	cout<<"top:"<<pq.top();
	pq.pop();
	cout<<pq.top();
}
