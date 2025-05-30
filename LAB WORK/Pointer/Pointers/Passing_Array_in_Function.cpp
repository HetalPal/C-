#include<iostream>
using namespace std;

void arrFun(int a[], int size);

main(){
    int a[] = {10, 20, 30}; 
    arrFun(a, 3);            
}

void arrFun(int a[], int size) {
	int i;
	
    for(i=0; i<size; i++) {
        if(a[i]%2==1) {
            cout << a[i] << " ";
        }
    }
}

