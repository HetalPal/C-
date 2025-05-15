//Question-4
#include<iostream>
using namespace std;

main(){
	int i,j,s;
	
	for(i=5; i>=1; i--){
		for(s=5; s>i; s--){
			cout<<" ";
		}
		for(j=i; j>=1; j--){
			if(j%2==0){
				cout<<"0";
			}else{
				cout<<"1";
			}
		}
		cout<<endl;
	}
}
