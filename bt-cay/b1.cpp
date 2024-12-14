#include<bits/stdc++.h>
using namespace std;
struct Tre{
	int data;
	Tre *left,*right;
};
typedef struct Tre* tre;
tre newnode(int x){
	tre tmp=new Tre();
	if(tmp!=nullptr){
		tmp->left=nullptr;
		tmp->right=nullptr;
		tmp->data=x;
	}
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void them(tre &a,int x){
	tre tmp=newnode(x);
	if(a==nullptr){
		a=tmp;
	}else if(a->data<x){
		them(a->right,x);
	}else if(a->data>x){
		them(a->left,x);
	}
}
void duyet(tre a){
	if(a!=nullptr){
		duyet(a->left);
		duyet(a->right);
		cout<<a->data<<" ";
	}
}
int main(){
	tre h=nullptr;
	while(1){
		int c;
		cin>>c;
		switch(c){
			case 1:
				int x;cin>>x;
				them(h,x);
				break;
			case 2:
				duyet(h);
				break;
		}
	}
}

