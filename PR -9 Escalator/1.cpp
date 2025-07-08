#include<iostream>
using namespace std;

class Stack{
	private:
		int *ar;
		int top;
		int cap;
		
		
	public:
		Stack(int size){
			cap = size;
			ar = new int[cap];
			top = -1;
		}	
		
		~Stack(){
			delete[]ar;
		}
		
		bool Full(){
			return top == cap-1;
		}
		
		bool Empty(){
			return top == -1;
		}
		
		void push(int value){
			if(Full()){
				cout<<"---Stack is Overflow...!---"<<value<<endl;
			}else{
				ar[++top] = value;
				cout<<"---"<<value<<" pushed to Stack---"<<endl;
			}
		}
		
		int pop(){
			if(Empty()){
				cout<<"---Stack is Underflow...Stack is Empty!!!---"<<endl;
				return -1;
			}else{
				int poppedValue = ar[top--];
				return poppedValue;
			}
		}

		int peek(){
			if(Empty()){
				cout<<"---Stack is Empty---"<<endl;
				return -1;
			}else{
				return ar[top];
			}
		}
		
		void Display(){
			if(Empty()){
				cout<<"---Stack is Empty---"<<endl;
			}else{
				cout<<"Stack Elements :"<<endl;
				for(int i=0; i<=top; i++){
					cout<<ar[i]<<" ";
				}
				cout<<endl;
			}
		}
		
};

int main(){
	int ch, size,value;
	
	Stack stack(size);
		
	cout<<"Enter the size of Stack :";
	cin>>size;
	
	while(1){
		cout<<endl<<"Press 1 for Push"<<endl;
		cout<<"Press 2 for Pop"<<endl;
		cout<<"Press 3 for Peek"<<endl;
		cout<<"Press 4 for Display"<<endl;
		cout<<"Press 5 for Exit"<<endl;
		cout<<"Enter your Choice :";
		cin>>ch;
		
		if(ch==5){
			break;
			cout<<"---Thank You :)---";
		}
		
		switch(ch){
			case 1:
				cout<<"Enter the Value to Push: ";
				cin>>value;
				stack.push(value);
			break;
			
			case 2:
				value = stack.pop();
				if(value =! -1){
					cout<<"Popped Value :"<<value<<endl;
				}
			break;
			
			case 3:
				value = stack.peek();
				if(value != -1){
					cout<<"Top Element is "<<value<<endl;
				}
			break;
			
			case 4:
				stack.Display();
			break;
			
			default:
				cout<<"Invalid Choice...Plese Try Again!!!"<<endl;
		}
	}	
	return 0;
}
