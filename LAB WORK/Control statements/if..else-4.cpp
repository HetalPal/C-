#include<iostream>
using namespace std;

main(){
	int a,b,c,d;
	
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"Enter C:";
	cin>>c;
	cout<<"Enter D:";
	cin>>d;
	
	if(a>b){
		if(a>c){
			if(a>d){
				cout<<"A is MAX...";
			}else{
				cout<<"D is MAX...";
			}
		}else{
			if(c>d){
				cout<<"C is MAX...";
			}else{
				cout<<"D is MAX...";
			}
		}
	}else{
		if(b>c){
			if(b>d){
				cout<<"B is MAX...";
			}else{
				cout<<"D is MAX...";
			}
		}else{
			if(c>d){
				cout<<"C is MAX...";
			}else{
				cout<<"D is MAX...";
			}
		}
	}
}
