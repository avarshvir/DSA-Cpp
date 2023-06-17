#include<iostream>
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
struct node *InsertAtEnd(struct node *head,int data){
	struct node *ptr=new node;
	struct node *p=head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	//return head;
}
int main(){
	struct node *head,*sec,*trd,*frt;
	head=new node;
	sec=new node;
	trd=new node;
	frt=new node;
	head->data=10;
	head->next=sec;
	sec->data=20;
	sec->next=trd;
	trd->data=30;
	trd->next=frt;
	frt->data=40;
	frt->next=NULL;
	LLT(head);
	cout<<"Insert At End "<<endl;
	InsertAtEnd(head,50);
	LLT(head);
}
