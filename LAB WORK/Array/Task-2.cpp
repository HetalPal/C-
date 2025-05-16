#include<iostream>
using namespace std;

main(){
	int size;
	
	cout<<"Enter the size of an Array:";
	cin>>size;
	
	int a[size];
	int i;
	
	cout<<"---Array Input---"<<endl;
	for(i=0; i<size; i++){
		cin>>a[i];
	}
	
	cout<<"---Array Output---"<<endl;
	for(i=0; i<size; i++){
		if(a[i]%2 == 0){
			cout<<a[i]<<" ";
		}
	}
}
