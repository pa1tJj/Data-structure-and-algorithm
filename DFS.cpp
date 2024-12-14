#include<bits/stdc++.h>
using namespace std;
//input
//9 9
//1 2
//1 3
//1 5
//2 4
//3 6
//3 7
//3 9
//5 8
//8 9
//n so canh, m so dinh
int n, m;
vector<int> adj[100];
bool visited[100];

void input() {
	cin>>n>>m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		
	}
	memset(visited, false, sizeof(visited));
}
void dfs(int u){
	cout<<u<<" ";
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]){
			dfs[v];
		}
	}
}
int main(){
	input();
	dfs(1);
}
