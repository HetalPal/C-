#include<iostream>
using namespace std;

int part(int a[], int low, int high){
	int i,j,temp;
	int p = a[high];
	
	i = low-1;
	for(j=low; j<high; j++){
		if(a[j] < p){
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	
	temp = a[i+1];
	a[i+1] = a[high];
	a[high] = temp;
	
	return i+1;
}

void quicksort(int a[], int low, int high){
	if(low<high){
		int vl = part(a, low, high);
		quicksort(a, low, vl - 1);
		quicksort(a, vl + 1, high);
	}
}

int main(){
	int a[]={11,5,15,8,7,44,6,4};
	int i, n;
	n = sizeof(a) / sizeof(a[0]);
	
	cout<<"---Array Element---"<<endl;
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;

	quicksort(a, 0, n-1); 
	cout<<"---Sorted Array---"<<endl;
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
