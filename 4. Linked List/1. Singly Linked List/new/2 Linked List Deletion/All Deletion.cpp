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
struct node *DeleteAtBeg(struct node *head){
	struct node *ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
struct node *DeleteAtIndex(struct node *head,int index){
	struct node *p=head;
	struct node *q=head->next;
	for(int i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	delete(q);
	return head;
}
struct node *DeleteAtEnd(struct node *head){
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	delete(q);
	return head;
}
struct node *DeleteByValue(struct node *head, int value){
	struct node *p=head;
	struct node *q=head->next;
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
		p->next=q->next;
		free(q);
	}
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
	cout<<"Delete at beg "<<endl;
	head=DeleteAtBeg(head);
	LLT(head);
    cout<<"Delete At Index"<<endl;
    head=DeleteAtIndex(head,1);
    LLT(head);
    /*cout<<"Delete At End "<<endl;
    head=DeleteAtEnd(head);
    LLT(head);*/
    cout<<"Delete By Value "<<endl;
    head=DeleteByValue(head,40);
    LLT(head);
}
