#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
   struct node *next;
};
void DLLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node *InsertAtBeg(struct node *head,int data){
	struct node *ptr=new node;
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}
struct node *InsertAtIndex(struct node *head,int data,int index){
	struct node *ptr=new node;
	ptr->data=data;
	struct node *p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
	    i++;
	}
	ptr->next=p->next;
	ptr->prev=p->prev;
	p->next=ptr;
	return head;
	
}
int main(){
	struct node *head,*sec,*trd,*frt,*fiv;
	head=new node;
	sec=new node;
	trd=new node;
	frt=new node;
	fiv=new node;
	head->data=10;
	head->prev=NULL;
	head->next=sec;
	
	sec->data=20;
	sec->prev=head;
	sec->next=trd;
	
	trd->data=30;
	trd->prev=sec;
	trd->next=frt;
	
	frt->data=40;
	frt->prev=trd;
	frt->next=fiv;
	
	fiv->data=50;
	fiv->prev=frt;
	fiv->next=NULL;
	
	DLLT(head);
		cout<<"InsertAtBeg"<<endl;
		head=InsertAtBeg(head,5);
		DLLT(head);
		cout<<"InsertAtIndex"<<endl;
		head=InsertAtIndex(head,5,2);
		DLLT(head);
}
