#include<iostream>
using namespace std;

int age();

main(){
	int ans = age();
	
	if(ans==1){
		cout<<"You Can VOTE...:)";
	}else{
		cout<<"You Can't VOTE...:(";
	}
}

int age(){
	int no;
	
	cout<<"Enter Your Age:-";
	cin>>no;
	
	if(no>=18){
		return 1;
	}else{
		return 0;
	}
}
