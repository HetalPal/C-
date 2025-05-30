#include<iostream>
using namespace std;

void rec(int no){
	
	if(no==6){
		return;
	}
	
	cout<<no<<" ";
	rec(no+1);
}
int main(){
	
	int n;
	n=1;
	rec(n);
	
}
