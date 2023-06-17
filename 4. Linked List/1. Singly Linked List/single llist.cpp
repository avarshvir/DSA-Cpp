#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *CreateNode(int data){
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node)); //allocating memory for structure node in heap
   n->data=data;
   n->next=NULL;
}
void traverse(struct node *head){
	if(head!=NULL){
		cout<<head->data<<" ";
		traverse(head->next);
	}
}
int main(){
	struct node *t,*t1,*t2;
	t=CreateNode(3);
	t1=CreateNode(44);
	t2=CreateNode(22);
	t->next=t1;
	t1->next=t2;
	t2->next=NULL;
	traverse(t);
	
}
