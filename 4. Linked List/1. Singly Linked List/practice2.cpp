#include<iostream>
using namespace std;
struct node {
	int data;
	struct node *next;
};
void LLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<"Element : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node *InsertAtBeg(struct node *head,int data){
	cout<<"Insert At Beg "<<endl;
	struct node *ptr= new node;
	ptr->data=data;
	ptr->next=head;
	return ptr;
	
}
struct node *InsertAtEnd(struct node *head,int data){
	cout<<"Insert At End "<<endl;
	struct node *ptr= new node;
	struct node *p = head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;

}
struct node *InsertAfterNode(struct node *head,struct node *PrevNode,int data){
	cout<<"Insert After Node "<<endl;
	struct node *ptr=new node;
	ptr->data=data;
	ptr->next=PrevNode->next;
	PrevNode->next=ptr;
	return head;
	
}
int main(){
	struct node *hea,*sec,*trd;
	hea=new node;
	sec=new node;
	trd=new node;
	hea->data=1;
	hea->next=sec;
	sec->data=2;
	sec->next=trd;
	trd->data=3;
	trd->next=NULL;
	LLT(trd);
	cout<<endl;
	hea=InsertAtBeg(hea,0);
	LLT(hea);
	InsertAtEnd(hea,4);
	LLT(hea);
	hea=InsertAfterNode(hea,sec,88);
	LLT(hea);
	
	return 0;
	
}



