#include<iostream>
using namespace std;

main(){
	int a,b,c,d,e;
	
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"Enter C:";
	cin>>c;
	cout<<"Enter D:";
	cin>>d;
	cout<<"Enter E:";
	cin>>e;
	
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					cout<<"A is MAX...";
				}else{
					cout<<"E is MAX...";
				}
			}else{
				if(d>e){
					cout<<"D is MAX...";
				}else{
					cout<<"E is MAX...";
				}
			}
		else{
			if(c>d){
				if(c>e){
					cout<<"C is MAX...";
				}else{
					cout<<"E is MAX...";
				}
			else{
				if(d>e){
					cout<<"D is MAX...";
				}else{
					cout<<"E is MAX...";
				}
			}	
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
				if(c>e){
					cout<<"C is MAX...";
				else{
					cout<<"E is MAX...";
				}
			}else{
				if(d>e){
					cout<<"D is MAX...";
				}else{
					cout<<"E is MAX...";
				}
			}
		}
	}
}
