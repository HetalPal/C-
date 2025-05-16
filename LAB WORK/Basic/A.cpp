#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int a=10;
	float b=10.10;
	char c='#';
	double d=12.2526363;
	
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	cout<<"C="<<c<<endl;
	cout<<"D="<<fixed<<setprecision(7)<<d;
}
