#include<iostream>
using namespace std;

main()
{
	int row,col;
	
	cout<<"Enter the number of Row:";
	cin>>row;
	cout<<"Enter the number of Column:";
	cin>>col;
	
	
	int  a[row][col];
	int i,j;
	
	cout<<"---Array Input---"<<endl<<endl;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<"Enter a["<<i<<"]"<<"["<<j<<"]:";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"---Array Output---"<<endl<<endl;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	
}
