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
struct node *InsertAtBeg(struct node *head,int data)
{
   struct node *ptr=new node;
   ptr->data=data;
   ptr->next=head;
   head=ptr;
   return head;
}
int main(){
	struct node *head,*sec,*trd,*frt;
	head=new node;
	sec=new node;
	trd=new node;
	frt=(struct node*)malloc(sizeof(struct node));
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
}

