#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int x,y;
	
	cout<<"***With Third Variable***"<<endl;
	
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	
	cout<<"Befora Swapping"<<endl;
	cout<<"A :"<<a<<endl;
	cout<<"B :"<<b<<endl;
	
	c=a;   
	a=b;   
	b=c;   
	
	cout<<"After Swapping"<<endl;
	cout<<"A :"<<a<<endl;
	cout<<"B :"<<b<<endl;
	
	cout<<"Enter X:";
	cin>>x;
	cout<<"Enter Y:";
	cin>>y;
	
	cout<<"***Without Third Variable***"<<endl;
	
	cout<<"Befora Swapping"<<endl;
	cout<<"X :"<<x<<endl;
	cout<<"Y :"<<y<<endl;
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	cout<<"After Swapping"<<endl;
	cout<<"X :"<<x<<endl;
	cout<<"Y :"<<y<<endl;
	
	return 0;
}
