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
struct node *InsertAfterNode(struct node *head,struct node *PrevNode, int data){
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
	InsertAfterNode(head,sec,45);
	LLT(head);
	return 0;
}
