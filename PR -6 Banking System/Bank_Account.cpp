#include<iostream>
using namespace std;

class Bank{
	private:
		float amountNo;
		string name;
		int accNo;
		
	public:
	
		void setAccount(int accNo, string name, float amountNo){
			this->accNo = accNo;
			this->name = name;
			this->amountNo = amountNo;
		} 
		
		int accountNo(){
			return this->accNo;
		}
		
		void getDetails(int acc_No){
			cout<<"Account No: "<<this->accNo<<endl;
			cout<<"Name : "<<this->name<<endl;	
			cout<<"Amount : "<<this->amountNo<<endl;
		}
			
		int cuur_balance;
		int cuur_bal;
			
		void getDeposite(int acc_No){
			int money;
		
			cout<<"Enter the number of your Money : ";
			cin>>money;
			
			cout<<"Your previous balance is "<<amountNo<<endl;
			
			cuur_balance = money+amountNo;
			cout<<"Your current balance is "<<cuur_balance<<endl;
		}
		
		void getwithdraw(int acc_No){
			int money;
			
			cout<<"Enter the number of your Money that you wish to withdraw : ";
			cin>>money;
			
			cout<<"Your previous balance is "<<amountNo<<endl;
			
			cuur_bal = cuur_balance-money;
			cout<<"Your current balance is "<<cuur_bal<<endl;
		}
};

int main(){
	int choice;
	Bank b[50];
	int cnt=0, i;
	int accNo;
	float amountNo;
	string name;
	int acc_No;
	int check=0;
	
	while(1){
		cout<<"Press 1 for Create an Account"<<endl;
		cout<<"Press 2 for Display your account deatils"<<endl;
		cout<<"Press 3 for Deposite your Amount"<<endl;
		cout<<"Press 4 for With-draw your Amount"<<endl;
		cout<<"Press 5 for Exit...."<<endl<<endl;
		
		cout<<"Enter your Choice :- ";
		cin>>choice;
		
		if (choice==5){
			cout<<"Thank You :)";
			break;
		}
		
		switch(choice){
			case 1:
				cout<<"Enter your Account Nubmer : ";
				cin>>accNo;
				cout<<"Enter your Name : ";
				cin>>name;
				cout<<"Enter your Amount : ";
				cin>>amountNo;
				b[cnt++].setAccount(accNo, name, amountNo);
				cout<<".....Your Account has been sucessfully Created.... "<<endl<<endl;
				
			break;
			
			case 2:
				cout<<"Enter your Account Number : ";
				cin>>acc_No;
				for(i=0; i<cnt; i++){
					if(b[i].accountNo()==acc_No){
						check=1;
						b[i].getDetails(acc_No);
						break;
					}
				}
				if(check==0){
					cout<<"Account not Found"<<endl;
				}
			break;
			
			case 3:
				cout<<"Enter your Account Number: ";
				cin>>acc_No;
				
				for(i=0; i<cnt; i++){
					if(b[i].accountNo()==acc_No){
						check=1;
						b[i].getDeposite(acc_No);
						break;
					}
				}
				
				cout<<"....Amount Deposited...."<<endl;
				
			break;
			
			case 4:
				cout<<"Enter your Account Number: ";
				cin>>acc_No;
				
				for(i=0; i<cnt; i++){
					if(b[i].accountNo()==acc_No){
						check=1;
						b[i].getwithdraw(acc_No);
						break;
					}
				}
				
				cout<<"....Amount withdrawed...."<<endl;				
		}
	}
	
	return 0;	
}
