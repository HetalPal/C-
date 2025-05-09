#include<iostream>
using namespace std;

main(){
	int n, cnt=0;
	
	cout<<"Enter any number:";
	cin>>n;
	cout<<endl;
	
	while(n != 0){
		cnt++;
		n = n/10;
	}
	
	cout<<"Number of digits in the given number is "<<cnt;
	
}
