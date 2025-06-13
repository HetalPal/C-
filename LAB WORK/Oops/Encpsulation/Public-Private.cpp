#include<iostream>
using namespace std;

class Student{

	private:
		int age;
		
	public:
		void setAge(int a){
			age=a;
		}	
	
	void showAge(){
		cout<<"Age is :"<<age;
	}	
};

int main(){
	Student std;
	std.setAge(18);
	std.showAge();
	return 0;
}
