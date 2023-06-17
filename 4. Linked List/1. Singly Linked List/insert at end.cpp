#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void LLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<"element : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node *InsertAtEnd(struct node *head,int data){
	struct node *ptr=new node;
	struct node *p=head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
}
int main(){
	struct node *head,*second,*third;
	head=new node;
	second=new node;
	third=new node;
	head->data=7;
	head->next=second;
	second->data=8;
	//head->data=7;
	second->next=third;
	third->data=9;
	third->next=NULL;
	LLT(head);
	InsertAtEnd(head,10);
	LLT(head);
	
}
