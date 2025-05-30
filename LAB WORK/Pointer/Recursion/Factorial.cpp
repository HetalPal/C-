#include<iostream>
using namespace std;

int fact(int n);

int fact(int n){
	if(n <= 1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}

main(){
	int n=5;
	cout<<"Factorial:"<<fact(n);	
}
