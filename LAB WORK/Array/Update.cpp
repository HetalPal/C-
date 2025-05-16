#include<iostream>
using namespace std;

main(){
	int i,a[5]={10,20,30,40,50};
	int index=4, value=35;

	a[index]=value;
	 
	for(i=0; i<5; i++){
		cout<<a[i]<<" ";
	}
}
