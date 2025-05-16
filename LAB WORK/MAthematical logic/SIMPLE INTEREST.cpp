#include<iostream>
using namespace std;

main(){
	int p, r, t;
	float ans;
	
	cout<<"Enter P:";
	cin>>p;
	cout<<"Enter R:";
	cin>>r;
	cout<<"Enter T:";
	cin>>t;
	
	ans = p * r * t / 100;
	
	cout<<"Simple Interest :"<<ans;
}
