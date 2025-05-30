#include<iostream>
using namespace std;

void update(int *p);

main(){
	int a[3]={10,20,30};
	int *p=a;
	update(p);
}

void update(int *p){
	
	int i;
	
	for(i=0; i<3; i++){
		cout<<*p<<" "<<(p+1)<<" "<<endl;
		p++;
	}
}
