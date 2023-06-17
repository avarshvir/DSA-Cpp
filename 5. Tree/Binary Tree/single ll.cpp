#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int info;
	struct node *link;
};
struct node *head=NULL;
void create_list(){
	if(head==NULL){
		int n;
		cout<<"enter the no. of nodes :";
		cin>>n;
		if(n!=0){
			int data;
			struct node *newnode;
			struct node *temp;
			newnode=(struct node*)malloc(sizeof(struct node));
			head=newnode;
			temp=head;
			cout<<"enter no. to inserted :";
			cin>>data;
			head->info=data;
			for(int i=2;i<=n;i++){
				newnode=(struct node*)malloc(sizeof(struct node));
				temp->link=newnode;
				cout<<"enter no. to inserted :";
				cin>>data;
				newnode->info=data;
				temp=temp->link;
			}
		}
		cout<<"the list is created "<<endl;
	}
	else 
	cout<<"the list is already created "<<endl;
}
void traverse(){
	struct node *temp;
	if(head==NULL)
	cout<<"list is empty"<<endl;
	else {
		temp=head;
		while(temp!=NULL){
			cout<<"data = "<<temp->info<<" ";
			temp=temp->link;
		}
	}
}
void insert(){
	struct node *temp,*newnode;
	int pos,data,i=1;
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"enter pos and data "<<endl;
	cin>>pos>>data;
	temp=head;
	newnode->info=data;
	newnode->link=0;
	while(i<pos-1){
		temp=temp->link;
		i++;
	}
	newnode->link=temp->link;
	temp->link=newnode;
}
int main(){
	int ch;
	while(1){
		cout<<"1>traverse \n 2>insert "<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				traverse();
				break;
				case 2:
					insert();
					break;
					case 3:
						exit(1);
						break;
						default:
							cout<<"invalid";
		}
	}
	return 0;
}
