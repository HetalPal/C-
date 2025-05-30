#include<iostream>
using namespace std;

main(){
	int x = 42;
	int *p = &x;
	int **ptr = &p;
	
	cout<<"Value: "<<x<<endl;
	cout<<"Using *p:"<<*p<<endl;
	cout<<"Using **ptr:"<<**ptr;
}
