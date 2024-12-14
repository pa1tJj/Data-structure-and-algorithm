#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string hoten;
	int ns,ms;
	float dtb;
};
struct SV{
	sinhvien s;
	SV *left,*right;
};
typedef struct SV* sv;
void in(sinhvien x){
	cout<<"\nma so sinh vien:"<<x.ms;
	cout<<"\nho ten sinh vien:"<<x.hoten;
	cout<<"\nnam sinh:"<<x.ns;
	cout<<"\ndiem trung binh:"<<x.dtb;
}
sv newsv(sinhvien x){
	cout<<"nhap ma so sinh vien:";cin>>x.ms;
	cin.ignore();
	cout<<"nhap ho ten sinh vien:";getline(cin,x.hoten);
	cout<<"nhap nam sinh:";cin>>x.ns;
	cout<<"nhap diem trung binh:";cin>>x.dtb;
	sv tmp=new SV();
	tmp->left=nullptr;
    tmp->right=nullptr;
	tmp->s=x;
	return tmp;
}
void them_sv(sv &a,sinhvien x){
	sv tmp=newsv(x);
	if(a==nullptr){
		a=tmp;
	}else{
		if(a->s.ms>x.ms){
			them_sv(a->left,x);
		}else if(a->s.ms<x.ms){
			them_sv(a->right,x);
		}
	}
}
void nlr(sv a){
	if(a!=nullptr){
		in(a->s);
		nlr(a->left);
		nlr(a->right);
	}
}
int main(){
	sv head=nullptr;
	sinhvien xx;
	while(1){
		cout<<"\n---------------MENU----------------";
		cout<<"\n1.them mot sinh vien";
		cout<<"\n2.tim kiem sinh vien theo ma so";
		cout<<"\n3.huy bo sinh vien theo ma so";
		cout<<"\n4.in danh sach sinh vien";
		cout<<"\n5.so luong sinh vien dtb nho hon 5";
		int c;
		cout<<"\nchon menu:";cin>>c;
		switch(c){
			case 1:
				them_sv(head,xx);
				break;
			case 4:
				nlr(head);
				break;
		}
	}
}
