#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void LLT(struct node *ptr){
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
struct node *InsertAtIndex(struct node *head, int index,int data){
	struct node* ptr=new node;
	struct node *p=head;
	ptr->data=data;
	int i=0;
	while(i!=index){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
struct node *InsertAtEnd(struct node *head,int data){
	struct node *ptr=new node;
	struct node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	ptr->data=data;
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
struct node *InsertAfterNode(struct node *head,struct node *PrevNode,int data){
	struct node *ptr=new node;
	ptr->data=data;
	ptr->next=PrevNode->next;
	PrevNode->next=ptr;
	return head;
}
int main(){
	struct node *head,*sec,*trd,*frt;
	head=new node;
	sec=(struct node*)malloc(sizeof(struct node));
	trd=new node;
	frt=new node;
	head->data=20;
	head->next=sec;
	sec->data=30;
	sec->next=trd;
	trd->data=40;
	trd->next=frt;
	frt->data=50;
	frt->next=NULL;
	LLT(head);
	cout<<"Insert At Beg "<<endl;
	head=InsertAtBeg(head,10);
	LLT(head);
	cout<<"Insert After Index "<<endl;
	InsertAtIndex(head,1,15);
	LLT(head);
	cout<<"Insert At End "<<endl;
	InsertAtEnd(head,60);
	LLT(head);
	cout<<"Insert After Node "<<endl;
	InsertAfterNode(head,trd,33);
	LLT(head);
	return 0;
}

