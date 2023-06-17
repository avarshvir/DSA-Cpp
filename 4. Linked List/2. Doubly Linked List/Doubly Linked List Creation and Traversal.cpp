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
	//	ptr=ptr->prev;
	}
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
	
	
	
	
	
	
}
