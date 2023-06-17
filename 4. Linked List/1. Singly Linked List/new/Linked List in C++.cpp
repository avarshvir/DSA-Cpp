#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
void Singly_Linked_List_D(node *ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	if(ptr==NULL){
		cout<<"NULL"<<endl;
	}
}
node *Insert_At_Beg(node *head){
	node *ptr=new node;
	int data;
	cout<<"Enter the Element to Insert At Beg "<<endl;
	cin>>data;
	ptr->data=data;
	ptr->next=head;
	head=ptr;
	return head;
}
node *Insert_At_Index(node *head){
	int index,data;
	cout<<"Enter the Index : ";
	cin>>index;
	cout<<"Enter the Element : ";
	cin>>data;
	node *ptr=new node;
    node *p=head;
	int i=0;
	ptr->data=data;
	while(i!=index-1){
		p=p->next;
	    i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
node *Insert_After_Node(node *head,node *PrevNode){
	int data;
	cout<<"Enter Element : ";
	cin>>data;
	node *ptr=new node;
	ptr->data=data;
	ptr->next=PrevNode->next;
	PrevNode->next=ptr;
	return head;
}
node *Insert_At_End(node *head){
	int data;
	cout<<"Enter the Element to Insert At End : ";
	cin>>data;
	node *ptr=new node;
	node *p=head;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
int main(){
	node *fst,*sec,*trd,*frt,*fiv;
	
	fst=new node;
	sec=new node;
	trd=new node;
	frt=new node;
	fiv=new node;
	
	fst->data=20;
	fst->next=sec;
	
	sec->data=30;
	sec->next=trd;
	
	trd->data=40;
	trd->next=frt;
	
	frt->data=50;
	frt->next=fiv;
	
	fiv->data=60;
	fiv->next=NULL;
	cout<<"***************Singly Linked List**************** "<<endl;
	cout<<endl;
	Singly_Linked_List_D(fst);
	int ch;
	while(ch!=6){
		cout<<"Singly Linked List Operations "<<endl;
		cout<<"Enter your Choice "<<endl;
		cout<<"\n 1> Insert At Beg \n 2> Insert At Index \n 3> Insert After Node \n 4> Insert At End "<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				fst=Insert_At_Beg(fst);
            	Singly_Linked_List_D(fst);
				break;	
				case 2:
			    fst=Insert_At_Index(fst);
				Singly_Linked_List_D(fst);
				break;	
				case 3:
	                fst=Insert_After_Node(fst,trd);
	                Singly_Linked_List_D(fst);
		        break;					
		        case 4:
		        	fst=Insert_At_End(fst);
		       	    Singly_Linked_List_D(fst);
		        break; 
		}
	}
	
}
