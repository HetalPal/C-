#include<iostream>
using namespace std;

class Student{
	private:
		int age;
		
	public:
		void setAge(int age){
			this -> age = age;
		}	
		
		void getAge(){
			cout<<"Age :"<<this -> age;
		}
};

main(){
	Student st;
	st.setAge(24);
	st.getAge();
}
