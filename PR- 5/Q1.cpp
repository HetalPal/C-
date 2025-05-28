#include<iostream>
using namespace std;

int add(int a,int b)
{	
	return a+b;
}

int sub(int a,int b)
{	
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

float div(float c,float d)
{	
	return c/d;
}

int modual(int a,int b)
{	
	return a%b;
}

main(){
	int choice,i;
	int a,b;
	float c,d;
	
	do{
		cout<<endl<<endl<<"***Arithmetic Operations Calculator***"<<endl;
		cout<<"Press 1 for Addition"<<endl;
		cout<<"Press 2 for Subtraction"<<endl;
		cout<<"Press 3 for Multiplication"<<endl;	
		cout<<"Press 4 for Division"<<endl;
		cout<<"Press 5 for Modules"<<endl;
		cout<<"Press 0 for Exit"<<endl<<endl;
		cout<<"Enter any number:";
		cin>>choice;
	
		switch(choice){
			case 1:
				cout<<"Enter First Integer number:";
				cin>>a;
	
				cout<<"Enter Second Integer number:";
				cin>>b;
					
				cout<<"A + B = "<<add(a,b);
			break;
				
			case 2:
				cout<<"Enter First Integer number:";
				cin>>a;
	
				cout<<"Enter Second Integer number:";
				cin>>b;
					
				cout<<"A - B = "<<sub(a,b);
			break;
				
				case 3:
					cout<<"Enter First Integer number:";
					cin>>a;
	
					cout<<"Enter Second Integer number:";
					cin>>b;
				
					cout<<"A * B = "<<mul(a,b);
				break;
				
				case 4:
					cout<<"Enter First Integer number:";
					cin>>c;
	
					cout<<"Enter Second Integer number:";
					cin>>d;
					
					cout<<"C / D = "<<div(c,d);
				break;
				
				case 5:
					cout<<"Enter First Integer number:";
					cin>>a;
	
					cout<<"Enter Second Integer number:";
					cin>>b;
					
					cout<<"A % B = "<<modual(a,b);
				break;
				
			default: 
				cout<<"Exitting Calculatur...."<<endl;	
			}
		}while(choice!=0);
		
	cout<<endl;
}
