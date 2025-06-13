#include<iostream>
using namespace std;

class Student{
	private:
		int rollno,age;
		string name;
		
	public:
		void setInfo(int rollno, string name, int age){
			this -> rollno = rollno;
			this -> name = name;
			this -> age = age;
		}
		
		void getInfo(){
			cout<<"Roll Number :"<<this -> rollno<<endl;
			cout<<"Name :"<<this -> name<<endl;
			cout<<"Age :"<<this -> age<<endl;
			cout<<"*************************************"<<endl;
		}
};

main(){
	Student st,st1,st2;
	
	st.setInfo(111, "Mayur", 18);
	st1.setInfo(112, "Keval", 21);
	st2.setInfo(113, "Aryan", 24);
	
	st.getInfo();
	st1.getInfo();
	st2.getInfo();	
}
