#include<iostream>
using namespace std;

main(){
	int row,col;
	
	cout<<"Enter the value of Row:";
	cin>>row;
	cout<<"Enter the value of Column:";
	cin>>col;	
	
	int a[row][col];
	int i,j;
	
	cout<<endl<<"---Array Input---"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"]"<< "["<<j<<"]:";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"---Array Output---"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"---Daigonal Elements of an Array---"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(i==j){
				cout<<a[i][j]<<" ";
			}
		}
	} 
}
