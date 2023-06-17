#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void LLT(struct node* ptr){
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
struct node *InsertAtIndex(struct node *head,int data, int index){
	struct node *ptr= new node;
	struct node *p=head;
	int i=0;
	ptr->data=data;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
	
}
struct node *InsertAtEnd(struct node *head,int data){
	struct node *ptr =new node;
	struct node *p=head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
struct node *InsertAfterNode(struct node *head, struct node *PrevNode,int data){
	struct node *ptr=new node;
	ptr->next=PrevNode->next;
	PrevNode->next=ptr;
	ptr->data=data;
	return head;
	
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
	free(q);
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
int main(){
	struct node* head,*sec,*thr,*frt,*fiv;
	head=new node;
	sec=new node;
	thr=new node;
	frt=new node;
	fiv=new node;
	head->data=10;
	head->next=sec;
	sec->data=20;
	sec->next=thr;
	thr->data=30;
	thr->next=frt;
	frt->data=50;
	frt->next=fiv;
	fiv->data=60;
	fiv->next=NULL;
	cout<<"your Linked List "<<endl;
	LLT(head);
	int ch;
	while(ch!=9){
		cout<<"Enter Choice "<<endl;
		cout<<"\n 1> Insert at Beg \n 2> Insert at Index \n 3> Insert at End \n 4> Insert after node \n 5> Delete at Beg \n 6> Delete at index \n 7> Delete At End "<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"InsertAtBeg"<<endl;
	            head=InsertAtBeg(head,5);
	            LLT(head);
				break;
				case 2:
					cout<<"InsertAtIndex"<<endl;
	                head=InsertAtIndex(head,40,4);
	                LLT(head);
	                break;
	case 3:
	cout<<"InsertAtEnd"<<endl;
	head=InsertAtEnd(head,70);
	LLT(head);
	break;
	case 4:
	cout<<"Insert After Node"<<endl;
	head=InsertAfterNode(head,thr,35);
	LLT(head);
	break;
	case 5:
	cout<<"Delete At Beg "<<endl;
	head=DeleteAtBeg(head);
	LLT(head);
	break;
	case 6:
	cout<<"Delete At Index"<<endl;
	head=DeleteAtIndex(head,2);
	LLT(head);
	break;
	case 7:
	cout<<"Delete At End "<<endl;
	head=DeleteAtEnd(head);
	LLT(head);
	break;
	default:
		cout<<"make another choice "<<endl;
	}
}
}
