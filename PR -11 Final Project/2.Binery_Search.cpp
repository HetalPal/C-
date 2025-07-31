#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
	int low = 0, high = n-1;	
	while(low <= high){
		int mid = (low + high) / 2;
		if (arr[mid] == k){
			return mid;
		}else if (arr[mid] < k){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	return -1;
}

main(){
	int arr[] ={40,20,10,3,5, 67,13};
	int n = sizeof(arr) / sizeof(arr[0]);

	int k = 5; 
	int i=binarySearch(arr, n, k);
	
	if(i != -1){
		cout<<"Element found at index : "<<i<<endl;
	}else{
		cout<<"Element not founded"<<endl;
	}
	return 0;
}

