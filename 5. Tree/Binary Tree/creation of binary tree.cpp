#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node *createNode(int data){
	struct node* n;
	n=(struct node*)malloc(sizeof(struct node));//allocating memory of structure in heap
	n->data=data;
	n->left=NULL;
	n->right=NULL;
}
int main(){
	//constructing root node
struct node *p=createNode(2);
struct node *p1=createNode(3);
struct node *p2=createNode(4);

//linking the root node
p->left=p1;
p->right=p2;
cout<<p<<" "<<p1<<" "<<p2<<endl;
struct node *p3=createNode(4);
p->left=p3;
cout<<p<<endl;
p1->left=p3;
cout<<p3;
return 0;
}
