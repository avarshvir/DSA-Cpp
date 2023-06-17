#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void LLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<"Element : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node* InsertAtBeg(struct node* head, int data){
	struct node* ptr=new node;
	ptr->data=data;
	ptr->next=head;
	return ptr;
	
}
struct node *InsertAtIndex(struct node *head,int data,int index){
	struct node *ptr = new node;
	struct node *p=head;
	int i=0;
	while(i!=index){
		p=p->next;
		i++;
	}
	p->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}

struct node *InsertAtEnd(struct node *head,int data){
    struct node* ptr=new node;
    struct node* p=head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
		
	}
p->next=ptr;
ptr->next=NULL;
return head;
}

struct node *InsertAfterNode(struct node *head,struct node *prevNode,int data){
     struct node* ptr=new node;
     ptr->data=data;
     ptr->next=prevNode->next;
     prevNode->next=ptr;
     
     return head;
}
int main(){
	struct node *head,*second,*third,*fourth;
	head=new node;
	second=new node;
	third=new node;
	fourth=new node;
	
	head->data=7;
	head->next=second;
	second->data=77;
	second->next=third;
	third->data=777;
	third->next=fourth;
	fourth->data=7777;
	fourth->next=NULL;
	LLT(head);
	
	cout<<"Insertion in begining "<<endl;
	head=InsertAtBeg(head,1000);
    LLT(head);
    
	cout<<"Insertion at index "<<endl;
	head=InsertAtIndex(head,2000,1);
	LLT(head);
	
	cout<<"Insert at end "<<endl;
	head=InsertAtEnd(head,2500);
	LLT(head);
	
	cout<<"Insert at after node"<<endl;
	head=InsertAfterNode(head,second,55);
	LLT(head);
	return 0;
	
}
