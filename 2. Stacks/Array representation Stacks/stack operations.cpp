#include<iostream>
#define max 2
using namespace std;
int top=-1,stack[max];
void Push();
void Pop();
void Display();
int main(){
	
	int ch;
	while(ch!=4){
		cout<<"****stack operations****"<<endl;
	    cout<<endl;
	    cout<<"1>Push\n 2>Pop\n 3>Display\n 4>Exit"<<endl;
	    cout<<"enter your choice 1-4"<<endl;
	    cin>>ch;
	    switch(ch){
	    	case 1:Push();
	    	break;
	    	case 2:Pop();
	    	break;
	    	case 3:Display();
	    	break;
	    	default:cout<<"\nwrong input";
		}
	}
}
	void Push(){
        int val;
		if(top==max-1){
			cout<<"stack is full"<<endl;
		}
		else{
			cout<<"enter the element to push in stack"<<endl;
			cin>>val;
			top=top+1;
			stack[top]=val;
		}
	}
	void Pop(){
		if(top==-1){
			cout<<"stack is empty"<<endl;
		}
		else{
			cout<<"deleted element from is "<<stack[top]<<endl;
			top=top-1;
		}
	}
	void Display(){
	     if(top==-1){
	     	cout<<"stack is empty"<<endl;
		 }
		 else{
		 	cout<<"stack is"<<endl;
		 	for(int i=top;i>=0;--i){
		 		cout<<stack[i]<<endl;
			 }
		 }
	}
	

