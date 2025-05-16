#include<iostream>
using namespace std;

main(){
	int i, n=5, a[5]={10,20,30,40,50};
	int index=2, value=25;
	
	for(i=n-1; i>=index; i--){
		a[i+1]=a[i];
	}
	
	a[index]=value;
	n++;
	
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
