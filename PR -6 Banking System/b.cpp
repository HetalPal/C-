#include<iostream>
using namespace std;

class Bank{
	private:
		int accNo;
		float accAmount;
		string accName;
		
	public:
		void setAccount(int accNo, string accName, float accAmount){
			this -> accNo = accNo;
			this -> accName = accName;
			this -> accAmount = accAmount;
		}
		
		void getAccount(){
			cout<<"Account Number: "<<this->accNo<<endl;
			cout<<"Holder Name: "<<this->accName<<endl;
			cout<<"Amount: "<<this->accAmount<<endl<<endl;
		}
		int ac_No(){
			return this->accNo;
		}
		
		int cuur_balance;
		int cuur_bal;
			
		void getDeposite(int acc_No){
			int money;
		
			cout<<"Enter the number of your Money : ";
			cin>>money;
			
			cout<<"Your previous balance is "<<accAmount<<endl;
			
			cuur_balance = money+accAmount;
			cout<<"Your current balance is "<<cuur_balance<<endl;
		}
		
		void getwithdraw(int acc_No){
			int money;
			
			cout<<"Enter the number of your Money that you wish to withdraw : ";
			cin>>money;
			
			cout<<"Your previous balance is "<<accAmount<<endl;
			
			cuur_bal = cuur_balance-money;
			cout<<"Your current balance is "<<cuur_bal<<endl;
		}
};

int main(){
	Bank b[50];
	int cnt=0, i;
	int choice, check;
	int accNo;
	float accAmount;
	string accName;
	
	while(1){
		cout<<"Press 1 for Create an Account"<<endl;
	cout<<"Press 2 for Display your account deatils"<<endl;
	cout<<"Enetr your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
				cout<<"Enter your Account Nubmer : ";
				cin>>accNo;
				cout<<"Enter your Name : ";
				cin>>accName;
				cout<<"Enter your Amount : ";
				cin>>accAmount;
				b[cnt++].setAccount(accNo, accName, accAmount);
				cout<<endl<<".....Your Account has been sucessfully Created.... "<<endl<<endl;
				
		break;
		
		case 2:
				cout<<"Enter your Account Number: ";
				cin>>accNo;
				check=0;
				for(i=0; i<cnt; i++){
					if(b[i].ac_No()==accNo){
						check=1;
						b[i].getAccount();
						break;
					}
				}
				if(check==0){
					cout<<endl<<"Account not Found"<<endl;
				}
		break;
		
		case 3:
				cout<<"Enter your Account Number: ";
				cin>>accNo;
				
				for(i=0; i<cnt; i++){
					if(b[i].accNo==acc_No){
						check=1;
						b[i].getDeposite(acc_No);
						break;
					}
				}
				
				cout<<"....Amount Deposited...."<<endl;
				
			break;
			
			case 4:
				cout<<"Enter your Account Number: ";
				cin>>accNo;
				
				for(i=0; i<cnt; i++){
					if(b[i].accNo==acc_No){
						check=1;
						b[i].getwithdraw(acc_No);
						break;
					}
				}
				
				cout<<"....Amount withdrawed...."<<endl;
	}
	}
}
