#include<iostream>
using namespace std;

class Info{
	public:
		int age;
		
	void checkAge(int a);
	void print(int n);
	void arr(int n);
};

void Info::checkAge(int a){
	if(a>=18 && a<=100){
		cout<<"You Can Vote"<<endl<<endl;
	}else{
		cout<<"You Can't Vote"<<endl;
	}
}

void Info::print(int num){
	int i;
	
	for(i=1; i<=num; i++){
		cout<<i<<" ";
	}
	cout<<endl<<endl;
}

void Info::arr(int n){
	int i;
	int x[n];
	int sum=0;
	
	for(i=0; i<n; i++){
	    cout<<"Enter elements:";
	    cin>>x[i];
	    
		sum= sum + x[i];
	}
	
	cout<<endl<<"Sum of 1D Array is "<<sum;
}

int main(){
	Info i;
	int num;
	int a,n;
	
	cout<<"Enter your Age:";
	cin>>a;
	i.checkAge(a);
	
	cout<<"Enter any Number:";
	cin>>num;
	i.print(num);
	
	cout<<"Enter any Number:";
	cin>>n;
	i.arr(n);
	
	return 0;
	
}
