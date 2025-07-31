#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

class LinkedList{
	public:
		Node *head;
		int ct;
		
		LinkedList(){
			head=NULL;
			ct=0;
		}
		
		void create(int element){
			Node *newNode=new Node(element);
			if(head==NULL){
				head=newNode;
			}else{
				Node *pt=head;
				while(pt->next!=NULL){
					pt=pt->next;
				}
				pt->next=newNode;
			}
			ct++;
		}
		
		void view(){
			if(head==NULL){
				cout<<"------List is Empty------";
			}
			Node *pt=head;
			while(pt!=NULL){
				cout<<pt->data<<" ";
				pt=pt->next;
			}cout<<endl;
		}
		
		void update(int position, int newelement){
			if(position==0||position>=ct){
				cout<<"------Invalid Position------"<<endl;
				return;
			}
			Node *pt=head;
			for(int i=0; i<position; i++){
				pt=pt->next;
			}
			pt->data=newelement;
			cout<<"------Updated Successfully------"<<endl;
		}
		
		void deleteNode(int position){
			if(position<0||position>=ct||head==NULL){
				cout<<"------Invalid Position------"<<endl;
				return;
			}
			Node *pt;
			if(position==0){
				pt=head;
				head=head->next;
			}else{
				Node *pre=head;
				for(int i=0; i<position-1; i++){
					pre=pre->next;
				}
				pt=pre->next;
				pre->next=pt->next;
			}
			delete pt;
			ct--;
			cout<<"------Deleted Successfully------"<<endl;
		}
};

int main(){
	LinkedList lt;
	int choice, element, position;
	
	while(1){
		cout<<endl<<"Enter 1 to create "<<endl;
		cout<<"Enter 2 to view "<<endl;
		cout<<"Enter 3 to update "<<endl;
		cout<<"Enter 4 to delete "<<endl;
		cout<<"Enter 0 to exit "<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		if(choice==0){
			cout<<"------Thank you------";
			break;
		}
		
		switch(choice){
			case 1:
				cout<<"Enter element: ";
				cin>>element;
				lt.create(element);
				
				cout<<"------Node Create Successfully------"<<endl;
			break;
			
			case 2:
				lt.view();
				cout<<"------View Node Successfully------"<<endl;
			break;
			
			case 3:
				cout<<"Enter the position for element: ";
				cin>>position;
				cout<<"Enter the new element: ";
				cin>>element;
				lt.update(position, element);
			break;
			
			case 4:
				cout<<"Enter position: ";
				cin>>position;
				lt.deleteNode(position);
			break;
			
			default:
				cout<<"-----Invalid choice-----";
		}
	}
	return 0;
}
