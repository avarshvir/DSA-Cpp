#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node *CreateNode(int data){
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	n->left=NULL;
	n->data=data;
	n->right=NULL;
}
void InOrder(struct node *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		InOrder(root->data);
		InOrder(root->right);
	}
}
int main(){
	struct node *p1,*p2,*p3,*p4,*p5,*p6,*p7,*p8;
	p1=CreateNode(1);
	p2=CreateNode(2);
	p3=CreateNode(5);
p4=CreateNode(3);
		p5=CreateNode(4);
	p6=CreateNode(6);
	p7=CreateNode(7);
	p8=CreateNode(8);
	p1->left=p2;
	p1->right=p3;
	p2->left=p4;
	p2->right=p5;
	p5->left=p7;
	p5->right=p8;
	p3->left=p6;
	InOrder(p1);
}
