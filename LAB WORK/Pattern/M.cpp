#include<iostream>
using namespace std;
main(){
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++){
			if((j==1 && j==5) || (i==2 && j%2==0) || (i==3 && j%2==1)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
	}
}
