
#include<iostream>
using namespace std;

int linear_Search(int arr[], int n, int target){
	for(int i=0; i<n; i++){
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

main(){
	int arr[]={13,24,35,4,3,22};
	int target = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	int r=linear_Search(arr, n, target);
	
	if (r!=-1){
		cout<<"Element found at index: "<<r<<endl;
	}else{
		cout<<"Element not found"<<endl;
	}

}

