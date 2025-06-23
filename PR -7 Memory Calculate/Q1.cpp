#include <iostream>
#include <vector>
using namespace std;

template <typename T>

class memoryCalc{
	private:
	    T id;
	    string name;

	public:
	    memoryCalc(T id, string name) {
	        this->id = id;
	        this->name = name;
	    }
	    
		void display() {
	        cout<< "Id: "<<id<<endl;
	        cout<< "Name: "<<name<<endl<<endl;
	    }

	    T getId() {
	        return id;
	    }
};

int main() {
    int ch, id, i;
    int index = -1;
    string name;
    vector<memoryCalc<int> > Str;

    while (1) {
        cout<<"Press 1 for Add Student"<<endl;
        cout<<"Press 2 for Show All Students"<<endl;
        cout<<"Press 3 for Remove Student by ID"<<endl;
        cout<<"Press 4 for Search Student by ID"<<endl;
        cout<<"Press 5 for Exit "<<endl;
        
        cout<<"Enter Your Choice: ";
        cin>>ch;

        if(ch==5) {
            cout<<"---Thank You---"<<endl;
            break;
        }

	switch(ch) {
        	
        case 1:
            cout<<"Enter Id: ";
            cin>>id;
            cout<<"Enter Name: ";
            cin>>name;

            Str.push_back(memoryCalc<int>(id, name));
            cout<<"--- DATA ADDED---"<<endl;
            
			break;

        case 2:
            if(Str.empty()) {
                cout<< "--- Data not Found ---"<<endl;
            } else {
                for (i=0; i<Str.size(); i++) {
                    Str[i].display();
                }
                cout<< "---List of Students---"<<endl;
            }
            
            break;

        case 3:
        	
            if(Str.empty()) {
                cout<<"---No Student is there to removed---" <<endl;
            } else {
                cout<<"Enter Student's ID for Remove data: ";
                cin>>id;

	            for(int i=0; i<Str.size(); i++) {
	                if(Str[i].getId() == id) {
	                    index = i;
	                    break;
	                }
	            }

			    if(index!= -1) {
					Str.erase(Str.begin() + index);
			        cout<<"---Data Removed---"<<endl;
			    }else{
			    	cout<<"--- Data not Found ---"<<endl;
			    }
			}
			
            break;

        case 4:
        	
            if(Str.empty()) {
                cout<<"--- Data not Found ---"<<endl;
            } else{
                cout<<"Enter ID: ";
                cin>>id;

                for(i=0; i<Str.size(); i++) {
                    if(Str[i].getId() == id) {
                        cout<<"--- Data Found ---"<<endl;
                        Str[i].display();
                        break;
                    }
                    if(i == Str.size() - 1) {
                        cout<<"--- Data not Found ---"<<endl;
                    }
                }
            } 
            
            break;
            
        default:
            cout<<"Invalid choice!!!"<<endl;
        }  
    }
    
    return 0;
}
