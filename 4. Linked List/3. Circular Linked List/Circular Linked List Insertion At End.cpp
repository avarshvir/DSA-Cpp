#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void CLLT(struct node *head){
	struct node *ptr=head;
	do{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	while(ptr!=head);
}
struct node *InsertAtBeg(struct node* head,int data){
	struct node *ptr=new node;
	ptr->data=data;
	struct node *p=head;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	return head;
}
struct node *InsertAtEnd(struct node *head,int data){
	struct node *ptr=new node;
	ptr->data=data;
	struct node *p=head;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
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
	head->next=sec;
	
	sec->data=20;
	sec->next=trd;
	
	trd->data=30;
	trd->next=frt;
	
	frt->data=40;
	frt->next=fiv;
	
	fiv->data=50;
	fiv->next=head;
	
	CLLT(head);
	
	cout<<"Insert At Beg In Circular LL "<<endl;
	head=InsertAtBeg(head,5);
	CLLT(head);
    
	cout<<"Insert At End In Circular LL "<<endl;
	head=InsertAtEnd(head,5);
	CLLT(head);
    
}
