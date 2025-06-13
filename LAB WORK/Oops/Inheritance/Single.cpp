#include<iostream>
using namespace std;

class Parent{
	public:
		void msg(){
			cout<<"Hello..."<<endl;
		}
};

class Child:public Parent{
	public:
		void display(){
			cout<<"Good Afternoon..."<<endl;
		}
};

main(){
	Child c;
	c.msg();
	c.display();
}
