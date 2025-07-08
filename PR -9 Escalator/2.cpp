#include<iostream>
using namespace std;

class Queue{
	private:
		int *ar;
		int f,r,size,capacity;
		
	public:
		Queue(int cap){
			capacity = cap;
			ar = new int[capacity];
			f = -1;
			r = -1;
			size = 0;
		}	
		
		bool Full(){
			return r == capacity-1;
		}
		bool Empty(){
			return f==-1 || f>r;
		}
		
		void enqueue(int value) {
			if(Full()){
				cout<<"---Queue is Overflow !!!---"<<endl;
				return;
			}
			if(f == -1){
				f = 0;
			}
				r++;	
				ar[r] = value;
				size++;
				cout<<"--- "<<value<< " Enqueued Successfully---"<<endl;	
		}
		
		void Dequeue() {
			if(Empty()) {
				cout<<"---Queue is Underflow---"<<endl;
				return;
		}
			cout<<"---"<<ar[f]<< " Dequeued Successfully---"<<endl;
			
			f++;
			size--;
		}
		
		void peek() {
			if(Empty()){
				cout<<"---Queue is Empty---"<<endl;
			}else{
				cout<<"Front element is: "<<ar[f]<<endl;
			}
		}
		
		void display() {
			if(Empty()){
				cout<<"---Queue is Empty---"<<endl;
				return;
			}
			
			cout<<"Queue elements: ";
			for(int i = f; i <= r; i++) {
				cout << ar[i] << " ";
			}
			cout << endl;
		}
		
		int getSize(){
			return size;
		}
		
		~Queue() {
			delete[] ar;
		}
};

int main(){
	int ch,cap,value;
	
	cout<<"Enter the Capacity of Queue :";
	cin>>cap;
	
	Queue que(cap);
	
	while(1){
		cout<<endl<<"1. Enqueue (Insert)"<<endl;
		cout<<"2. Dequeue (Remove)"<<endl;
		cout<<"3. Peek"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"5. Size (Insert)"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter Your Choice :";
		cin>>ch;
		
		if(ch==0){
			cout<<"---Thank You---";
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter value to Enqueue :";
				cin>>value;
				que.enqueue(value);
			break;
			
			case 2:
				que.Dequeue();
			break;
			
			case 3:
				que.peek();
			break;
			
			case 4:
				que.display();
			break;
			
			case 5:
				cout<<"Size of Queue is "<<que.getSize()<<endl;
			break;	
			
			default:
				cout<<"---Invalid Choice...Please Try Again!!!---";
		}
	}
	
	return 0;
}
