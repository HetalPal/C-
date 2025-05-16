#include<iostream>
using namespace st;
main(){
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++){
			if(j==1 || (i+j==6) || (i-j==2)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
	}
}
