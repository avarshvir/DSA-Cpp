#include<iostream>
using namespace std;
int i,n,arr[100];
void insert(int num, int pos);
void del(int pos);
void location(int element);
void display();
void insert(int num, int pos){
	for(int i=5;i>=pos;i--)
	arr[i]=arr[i-1];
	arr[i]=num;
	n++;
}
void del(int pos){
	for(int i=pos;i<=n;i++)
		arr[i-1]=arr[i];
		arr[i-1]=0;
}
void display(){
	cout<<"array is:"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
void location(int element){
	cin>>element;
	int index;
	for(int i=0;i<5;i++){
		if(element==arr[i]){
			index=i;
		}
		cout<<index;
	}
}
int main(){
	int k;
	cout<<"enter no. element of array";
	cin>>n;
    cout<<"array is: ";
	for(k=0;k<n;k++){
		cin>>arr[k];
	}	
	int select;
	int num,pos,element;
	while(select!=5){
		cout<<"Press 1 for insert an element in an array :"<<endl;
		cout<<"Press 2 for delete an element in an array :"<<endl;
	    cout<<"Press 3 for display all array elements :"<<endl;
	    cout<<"Press 4 to know the location of an element in an array :"<<endl;
	    cout<<"Press 5 to quit"<<endl;
	    cin>>select;
	    switch(select){
	    	case 1:
	    		cout<<"enter element: ";
	    		cin>>num;
	    		cout<<"enter positon: ";
	    		cin>>pos;
                insert(num,pos);
                break;
            case 2:
            	cout<<"enetr postion:";
            	cin>>pos;
            	del(pos);
            	break;
            case 3:
            	cout<<"array: "<<endl;
            	display();
            	break;
            case 4:
            	cout<<"enter element: ";
            	location(element);
            	break;
            case 5:
            	break;
            default:
			cout<<"invalid input"<<endl; 
		}
	}
}
