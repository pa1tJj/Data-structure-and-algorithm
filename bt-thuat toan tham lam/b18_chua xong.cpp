#include<bits/stdc++.h>
using namespace std;
class kruskal{
	int v,e,w;
	public:
		void nhap(kruskal[],int);
		void sx(kruskal[],int);
		void in(kruskal[],int);
		void tt(kruskal[],int);
};
void kruskal::nhap(kruskal k[],int n){
	for(int i=0;i<n;i++){
		cin>>k[i].v>>k[i].e>>k[i].w;
	}
}
void kruskal::sx(kruskal k[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(k[i].w>k[j].w){
				swap(k[i],k[j]);
			}
		}
	}
}
void kruskal::tt(kruskal k[],int n){
	
}
int main(){
	int n;
	cin>>n;
	kruskal k[n],x;
	x.nhap(k,n);
	x.tt(k,n);
}
