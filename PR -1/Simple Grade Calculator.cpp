#include<iostream>
using namespace std;

main(){
	int a;
	char grade;
	
	cout<<"Enter your total of marks out of 100:";
	cin>>a;
	
 	grade = (a >= 81 && a <= 100) ? 'A' :
            (a >= 71 && a <= 80)  ? 'B' :
            (a >= 61 && a <= 70)  ? 'C' :
            (a >= 51 && a <= 60)  ? 'D' :
            (a >= 41 && a <= 50)  ? 'E' :
            (a >= 33 && a <= 40)  ? 'F' :
                                   'X';
			
	if(grade=='X'){
		cout<<"You Are Fail...Try Next Time..";
	}
	else{
		switch(grade){
			case 'A':
				cout<<"Execllent Work... :)";
			break;
		
			case 'B':
				cout<<"Well Done... :)";
			break;
		
			case 'C':
				cout<<"Good Job... :)";
			break;
		
			case 'D':
				cout<<"You Pass... :)";
			break;
		
			case 'E':
				cout<<"You Pass..But You Could Do Better... :)";
			break;
		
			case 'F':
				cout<<"You Pass..Work Hard For Better Improvment... :)";
			break;
			
			default:
				cout<<"Please Enter Corrcet Number...";
		}
	}
}	
