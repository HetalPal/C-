#include<iostream>
using namespace std;

main(){
	int a,b,c;
	
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"Enter C:";
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<"A is MAX...";
		}else{
			cout<<"C is MAX...";
		}
	}else{
		if(b>c){
			cout<<"B is MAX...";
		}else{
			cout<<"C is MAX...";
		}
	}
}
