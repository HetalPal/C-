#include<iostream>
using namespace std;

class Student{
	private:
		int age;
	
	public:
		void setAge(int a){
			age = a;
		}
		
		int getAge(){
			return age;
		}
};

main(){
	Student st;
	st.setAge(18);
	cout<<"Age :"<<st.getAge();
		
}
