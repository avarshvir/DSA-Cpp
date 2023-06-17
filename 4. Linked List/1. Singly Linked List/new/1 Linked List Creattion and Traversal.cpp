#include<iostream>
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
int main(){
	struct node* head,*sec,*thr;
	head=new node;
	sec=new node;
	thr=new node;
	head->data=10;
	head->next=sec;
	sec->data=20;
	sec->next=thr;
	thr->data=30;
	thr->next=NULL;
	LLT(head);
	
	
}
