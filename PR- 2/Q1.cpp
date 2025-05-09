#include<iostream>
using namespace std;

main(){
	char A='a';
	
	do{
		cout<<A<<" ";
		A += 4;
	}while(A <= 'z');
}
