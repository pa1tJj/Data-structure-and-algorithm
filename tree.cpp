#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
typedef struct Node* node;
node newnode(int newdata){
	node tmp=new Node();
	if(tmp!=nullptr){
		tmp->left=nullptr;
		tmp->right=nullptr;
		tmp->data=newdata;
	}
	return tmp;
}
void ktao(node &a){
	a=nullptr;
}
void chen(node &a,int newdata){
	node tmp=newnode(newdata);
	if(a==nullptr){
		a=tmp;
	}else{
		if(a->data<newdata){
			chen(a->right,newdata);
		}else if(a->data>newdata){
			chen(a->left,newdata);
		}
	}
}
node min(node a){
	if(a->left==nullptr){
		return a;
	}
	return min(a->left);
}
node pp(node x,node y){
	if(x==nullptr || x==y){
		return nullptr;
	}
	if(x->left==y || x->right==y){
		return x;
	}
	if(y->data>x->data){
		return pp(x->right,y);
	}else{
		return pp(x->left,y);
	}
}
void xoa(node &a,int x){
	if(a==nullptr){
		return;
	}
	node p=a;
	node f;
	if(a->data<x){
		xoa(a->right,x);
	}else if(a->data>x){
		xoa(a->left,x);
	}else{
		if(a->left==nullptr && a->right==nullptr){
		    delete a;
		    a=nullptr;
	    }else if(a->left==nullptr){
		    a=a->right;
		    delete p;
	    }else if(a->right==nullptr){
		    a=a->left;
		    delete p;
     	}else{
		    p=min(a->right);
		    f=pp(a,p);
		    a->data=p->data;
		    if(f!=nullptr){
			    if(f->left==p){
				    f->left=nullptr;
			    }else if(f->right==p){
				    f->right=p->right;
				    delete p;
			    }
		    }
	    }
	}	
}
node tk(node &a,int x){
	if(a==nullptr){
		return nullptr;
	}else{
		if(a->data>x){	
			tk(a->left,x);
		}else if(a->data<x){
			tk(a->right,x);
		}else{
			cout<<"ton tai nut can tim";
		}
	}
}
bool nut_la(node &a){
	return (a->left==nullptr && a->right==nullptr);
}
int dem_node_la(node &a){
	if(a==nullptr){
		return 0;
	}else{
		if(nut_la(a)){
			return 1;
		}
		return dem_node_la(a->left)+dem_node_la(a->right);
	}
}
int tong(node a){
	int s,sl,sr;
	s=sl=sr=0;
	if(a==nullptr){
		return 0;
	}else{
		if(a->left!=nullptr){
			sl=tong(a->left);
		}
		if(a->right!=nullptr){
			sr=tong(a->right);
		}
		s=a->data+sl+sr;
		return s;
	}
}
void nlr(node &a){
	if(a!=nullptr){
		cout<<a->data<<" ";
		nlr(a->left);
		nlr(a->right);
	}
}
main(){
	node head=nullptr;
	while(1){
		cout<<"\n1.them mot nut";
		cout<<"\n2.xoa mot nut";
		cout<<"\n3.tim kiem nut";
		cout<<"\n4.dem so luong nut la";
		cout<<"\n5.tong gia tri cac nut";
		cout<<"\n0.in theo thu tu nlr";
		int c;
		cout<<"\nchon:";cin>>c;
		switch(c){
			case 1:
			    int x;
			    cout<<"nhap gia tri nut them:";cin>>x;
			    chen(head,x);
			    break;
		    case 2:
			    int xx;
			    cout<<"nhap gia tri nut can xoa:";cin>>xx;
			    xoa(head,xx);
		 	    break;
		 	case 3:
		 		int xxx;
		 		cout<<"nhap nut can tim kiem:";cin>>xxx;
		 		tk(head,xxx);
		 		break;
		 	case 4:
		 		cout<<dem_node_la(head);
		 		break;
		 	case 5:
		 		cout<<tong(head);
		 		break;
		 	case 0:
		 		nlr(head);
		 		break;
		}		
	}
}
