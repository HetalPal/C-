#include<iostream>
using namespace std;

class A{
	public:
		void data_a(){
			cout<<"A Class"<<endl;
		}
};

class B:public A{
	public:
		void data_b(){
			cout<<"B Class"<<endl;
		}
};

class C:public B{
	public:
		void data_c(){
			cout<<"C Class"<<endl;
		}
};

main(){
	C c;
	c.data_a();
	c.data_b();
	c.data_c();
}
