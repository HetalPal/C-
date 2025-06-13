#include<iostream>
using namespace std;

class A{
	public:
		int a;
};

class B:public A{
	public:
		int b;
};

class C:public A,public B{
	public:
		int sum(){
			cout<<"Enter A:";
			cin>>a;
			cout<<"Enter B:";
			cin>>b;
		
			cout<<"Addition of A and B is "<<a+b;	
		} 
};

main(){
	C c;
	c.sum();	
}
