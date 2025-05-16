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
			cout<<a[i]<<" ";
	}

	cout<<endl<<endl;
	int sum=0;
	
	cout<<"---Addition of an Array---"<<endl;
	for(i=0; i<size; i++){
		sum = sum + a[i];	
	}
	cout<<sum;
}
