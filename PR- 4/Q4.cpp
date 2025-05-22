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
	
	cout<<endl<<"---Row wise Addition of an Array---"<<endl;
	
	int r;
	int sum = 0; 
	cout<<"Enter the number of Row:";
	cin>>r;
	cout<<endl;
	
	for(i=0; i<row; i++){
    	for(j=0; j<col; j++){
    		if(i==r){
    			cout<<a[i][j]<<" ";
    			sum = sum + a[i][j];
			}
    	}
    }
    cout<<endl<< "Sum of row " << r << ": " << sum << endl;
    
    cout<<endl<<"---Column wise Addition of an Array---"<<endl;
	
	int c;
	int cs = 0; 
	cout<<"Enter the number of Column:";
	cin>>c;
	cout<<endl;
	
	for(i=0; i<row; i++){
    	for(j=0; j<col; j++){
    		if(j==c){
    			cout<<a[i][j]<<" ";
    			cs = cs + a[i][j];
			}
    	}
    }
    cout<<endl<< "Sum of Column " << c << ": " << cs << endl;
}
