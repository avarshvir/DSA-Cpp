#include<iostream>
#include<malloc.h>    //#include<stdlib.h>
struct node{
	int data;
	struct node *left, *right;
};
struct node *CreateNode(int data){
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node)); //allocating memory for struct node in heap
n->data=data;
n->left=NULL;
n->right=NULL;
}
void PreOrder(struct node *root){
	if(root!=NULL){
		cout<<root->data;
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
int main(){
	//creating root nodes using function
	struct node *p,*p2,*p3,*p4,*p5,*p6,*p7,*p8;
	p=CreateNode(1);
	p2=CreateNode(2);
	p3=CreateNode(3);
	p4=CreateNode(4);
	p5=CreateNode(5);
	p6=CreateNode(6);
	p7=CreateNode(7);
	p8=CreateNode(8);
	//linking nodes
	p->left=p2;
	p->right=p3;
	p2->left=p4;
	p2->right=p5;
	p4->left=p6;
	p3->left=p7;
	p3->right=p8;
	PreOrder(p);
}

