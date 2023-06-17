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
struct node* InsertAtIndex(struct node *head,int data,int index){
	struct node *ptr=new node;
	struct node *p=head;
	int i=0;
	while(i!=index){
		p=p->next;
		i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
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
	trd->data=40;
	trd->next=frt;
	frt->data=50;
	frt->next=NULL;
	LLT(head);
	cout<<"Insert At Index "<<endl;
	head=InsertAtIndex(head,30,1);
	LLT(head);
}
