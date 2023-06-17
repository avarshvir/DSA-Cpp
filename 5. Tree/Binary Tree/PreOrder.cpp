#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	char data;
	struct node *left, *right;
};
struct node *CreateNode(char data){
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node)); //allocating memory for structure node in heap
   n->data=data;
   n->left=NULL;
   n->right=NULL;
}
void PreOrder(struct node *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
int main(){
	//contructing roots;
	struct node *p,*p2,*p3,*p4,*p5,*p6,*p7,*p8;
	p=CreateNode('A');
	p2=CreateNode('B');
	p3=CreateNode('C');
	p4=CreateNode('D');
	p5=CreateNode('E');
	p6=CreateNode('F');
	p7=CreateNode('G');
	p8=CreateNode('H');
	//linking node
	p->left=p2;
	p->right=p3;
	p2->left=p4;
	p2->right=p5;
	p4->left=p6;
	p3->left=p7;
	p3->right=p8;
	PreOrder(p);
}
