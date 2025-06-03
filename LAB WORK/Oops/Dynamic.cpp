#include<iostream>
using namespace std;

class Student{
	public:
	int age,id,standard;
	string name;
	
	void setDetails(int id,string name, int age,int standard){
		this -> id = id;
		this -> name = name;
		this -> age = age;
		this -> standard = standard;
	}
	
	void getDetails(){
		cout<<this -> id<<"       "<<this -> name<<"              "<<this -> age<<"    "<<this -> standard<< endl;
	}
};

main(){
	Student s[3];
	
	int i,n,age,id,standard;
	string name;
	
	cout<<"How many Record will you enter:";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<"Enter ID:";
		cin>>id;
		
		cout<<"Enter Name:";
		cin>>name;
		
		cout<<"Enter Age:";
		cin>>age;
		
		cout<<"Enter Standard:";
		cin>>standard;
		
		s[i].setDetails(id,name,age,standard);
	}	
	
	cout<<"ID       "<<"Name              "<<"Age    "<<"Standard"<<endl;
	
	for(i=0; i<n; i++){
		s[i].getDetails();
	}
}
