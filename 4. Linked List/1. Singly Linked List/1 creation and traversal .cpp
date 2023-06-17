#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void LLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<"Element : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main(){
	struct node* head;
	struct node* second;
	struct node* third;
	 
	//Allocating memory for nodes in heap 
	head=(struct node*)malloc(sizeof(struct node));    //1st way to allocate memory
	second=new node;     //another way to allocate memory
	third=new node;
	
	head->data=77;
	head->next=second;     //linking 1st node to 2nd node
	second->data=88;
	second->next=third;     //linking 2nd node to 3rd node
	third->data=99;
	third->next=NULL;       //terminate 3rd node;
	
	LLT(head);
	
}
