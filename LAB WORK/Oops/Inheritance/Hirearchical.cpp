#include<iostream>
using namespace std;

class A{
	public:
		int age;
};

class B:public A{
	public:
		void printAge(){
			cout<<"Enter Your Age :";
			cin>>age;
			cout<<"Your age is "<<age<<endl<<endl;
		}
};

class C:public A{
	public:
		void checkAge(){
			B b;
			b.printAge();
			
			if(age>=18){
				cout<<"You Can Vote...";
			}else{
				cout<<"You Can't Vote...";
			}
		}
};

main(){
	C c;
	c.checkAge();	
}
