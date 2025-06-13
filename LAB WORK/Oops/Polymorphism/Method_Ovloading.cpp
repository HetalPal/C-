#include<iostream>
using namespace std;

class Calc{
	public:
		void add(int a,int b){
			cout<<"Addition of number is "<<a+b<<endl<<endl;
		}
		
		void add(int a,int b,int c){
			cout<<"Addition of number is "<<a+b+c<<endl<<endl;
		}
};

int main(){
	
	Calc c;
	c.add(10,20);
	c.add(14,98,67);
	
	return 0;
}
