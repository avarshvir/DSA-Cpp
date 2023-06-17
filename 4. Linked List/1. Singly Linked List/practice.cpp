#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
	
};

void LLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<"Element "<<" = "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node *InsertAtBed(struct node* head,int data){
	struct node *ptr=new node;
	ptr->data=data;
	ptr->next=head;
	return ptr;
}
struct node *InsertAtEnd(struct node* head,int data){
	struct node *ptr=new node;
	struct node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr->next;
	ptr->next=NULL;
	return head;
}
struct node *InsertAfterNode(struct node *head,struct node *prevNode, int data){
	struct node* ptr=new node;
	ptr->data=data;
	ptr->next=prevNode->next;
	prevNode->next=ptr;
	return head;
}

int main(){
	struct node *head,*sec,*thr;
	head=new node;
	sec=new node;
	thr=new node;
	head->data=1;
	head->next=sec;
	sec->data=2;
	sec->next=thr;
	thr->data=3;
	thr->next=NULL;
	LLT(head);
	cout<<endl;
//	cout<<"insert at beg "<<endl;
//	head=InsertAtBeg(head,0);
//	LLT(head);
//	cout<<endl;
//	cout<<"insert at end "<<endl;
//	InsertAtEnd(head,4);
//	LLT(head);
	cout<<endl;
	cout<<"insert after node "<<endl;
	head=InsertAfterNode(head,sec,4);
	LLT(head);
	
}

