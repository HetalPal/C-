#include<iostream>
using namespace std;

class Student{
	public:
		int age;
		string name;
		
		void display(){
			cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<endl;
		}
};

main(){
	Student s[3];
	
	s[0].name="Jay";
	s[0].age=16;
	s[0].display();
	
	s[1].name="Rishi";
	s[1].age=18;
	s[1].display();
	
	s[2].name="Aksh";
	s[2].age=17;
	s[2].display();	
}
