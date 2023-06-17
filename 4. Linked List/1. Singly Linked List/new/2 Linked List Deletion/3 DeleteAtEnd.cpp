#include<iostream>
#include<stdlib.h>
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
struct node *DeleteAtEnd(struct node *head){
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
	
}
int main(){
	struct node *head,*sec,*trd,*frt;
	head=new node;
	sec=(struct node*)malloc(sizeof(struct node));
	trd=(struct node*)malloc(sizeof(struct node));
	frt=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->next=sec;
    sec->data=20;
	sec->next=trd;
	trd->data=30;
	trd->next=frt;
	frt->data=40;
	frt->next=NULL;
	LLT(head);
	cout<<"Delete at End "<<endl;
	head=DeleteAtEnd(head);
	LLT(head);
}
