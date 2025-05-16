#include<iostream>
using namespace std;

main(){
	int i, n=5, a[5]={10,20,30,40,50};
	int index=2;
	
	for(i=index; i<n; i++){
		a[i]=a[i+1];
	}
	
	n--;
	
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
