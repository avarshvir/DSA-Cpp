#include<iostream>
using namespace std;
struct node {
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
	
}
