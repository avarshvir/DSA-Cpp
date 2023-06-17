#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
void SLLT(node *ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	if(ptr==NULL){
		cout<<"NULL"<<endl;
	}
}
node *InsertAtBeg(node *head){
	int data;
	cout<<"Enter Element To Insert At Beg "<<endl;
	cin>>data;
	node *ptr=new node;
	ptr->data=data;
	ptr->next=head;
	head=ptr;
	return head;
}
node *InsertAtIndex(node *head){
	int index,data;
	cout<<"Enter Index "<<endl;
	cin>>index;
	cout<<"Enter Element "<<endl;
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
node *InsertAfterNode(node *head, node *PrevNode){
	node *ptr=new node;
	int data;
	cout<<"Enter Element "<<endl;
	cin>>data;
	ptr->data=data;
	ptr->next=PrevNode->next;
	PrevNode->next=ptr;
	return head;
}
node *InsertAtEnd(node *head){
	int data;
	cout<<"Enter Element To Insert At End "<<endl;
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
node *DeleteAtBeg(node *head){
	node *ptr=head;
	head=head->next;
	delete(ptr);
	return head;
}
node *DeleteAtIndex(node *head){
	int index;
	cout<<"Enter Index To Delete Element "<<endl;
    cin>>index;
    node *p=head;
    node *q=head->next;
    for(int i=0;i<index-1;i++){
    	p=p->next;
    	q=q->next;
	}
	p->next=q->next;
	delete(q);
	return head;
}
node *DeleteByValue(node *head){
	int value;
	cout<<"Enter Element "<<endl;
	cin>>value;
	node *p=head;
	node *q=head->next;
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
		p->next=q->next;
		delete(q);
	}
	return head;
}
node *DeleteAtEnd(node *head){
	node *p=head;
	node *q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	delete(q);
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
	SLLT(fst);
	cout<<endl;
	int ch;
	while(ch!=9){
		cout<<"Singly Linked List Operations "<<endl;
		cout<<"Enter your Choice "<<endl;
		cout<<"\n 1> Insert At Beg \n 2> Insert At Index \n 3> Insert After Node \n 4> Insert At End ";
		cout<<"\n--------------------------------";
		cout<<"\n 5> Delete At Beg \n 6> Delete At Index \n 7> Delete By Value \n 8> Delete At End ";
		cout<<"\n--------------------------------";
		cout<<"\n 9> Exit "<<endl;
		cout<<"--------------------------------";
		cin>>ch;
		switch(ch){
			case 1:
				fst=InsertAtBeg(fst);
            	SLLT(fst);
				break;	
				case 2:
			    InsertAtIndex(fst);
				SLLT(fst);
				break;	
				case 3:
	                InsertAfterNode(fst,trd);
	                SLLT(fst);
		        break;					
		        case 4:
		        	InsertAtEnd(fst);
		       	    SLLT(fst);
		        break;
				case 5:
				fst=DeleteAtBeg(fst);
				SLLT(fst);
				break;
				case 6:
				fst=DeleteAtIndex(fst);
				SLLT(fst);
				break;
				case 7:
					fst=DeleteByValue(fst);
					SLLT(fst);
				case 8:
					fst=DeleteAtEnd(fst);
					SLLT(fst);
					break;
					default:
						cout<<"Make Another choice "<<endl;
		       
		}
	}
	
}
