#include<iostream>
using namespace std;

main(){
	int n,rem,sum=0;
	
	cout<<"Enter any number:";
	cin>>n;
	cout<<endl;
	
	rem = n%10;
	
	while(n>=10){
		n = n/10;
	}
	
	sum = rem+n;
	cout<<"Addition of first and last digit is "<<sum;
}
