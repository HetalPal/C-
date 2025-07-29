
#include<iostream>
using namespace std;

int main(){
	int arr[] = {2, 1, 15, 10, 34};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	int i;
	for(i; i<n-1; i++){
		int min = i;
		int j;
		for(j = i+1; j<n; j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			int tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
	for(int i=0; i<n; i++){
		cout<<" "<<arr[i];
	}
	return 0;
}

