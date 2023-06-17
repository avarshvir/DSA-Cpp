#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void LLT(struct node *ptr){
	while(ptr!=NULL){
		cout<<"element : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node* InsertAtBeg(struct node* head,int data){
	struct node* ptr=new node;
	ptr->data=data;
	ptr->next=head;
	return ptr;
	}
int main(){
	struct node *head,*second,*third;
	head=new node;
	second=new node;
	third=new node;
	head->data=7;
	head->next=second;
	second->data=8;
	//head->data=7;
	second->next=third;
	third->data=9;
	third->next=NULL;
	LLT(head);
	head=InsertAtBeg(head,100);
	LLT(head);
	
}
