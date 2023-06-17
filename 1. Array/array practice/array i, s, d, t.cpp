#include<iostream>
#include<conio.h>
using namespace std;
void traversal(int A[],int N);
void insertion(int A[],int &N,int Pos,int ITEM);
int lsearch(int A[],int N,int item);
void deletee(int A[],int &N,int Pos,int ITEM );
int main()
{
int a[10],n,pos,item,choice,delitem;
char ch;
cout<<"\n Enter size:";
cin>>n;
cout<<"\n Enter Array:";
for(int i=0;i<n;i++)
cin>>a[i];
do
{
cout<<"\n \t\t Menu Driven Program";
cout<<"\n 1. Traversal \n 2. Insertion \n 3. Deletion \n 4. Searching";
cout<<"\n Enter your choice:";
cin>>choice;
switch(choice)
{
        case 1: traversal(a,n);
                break;
        case 2: //Insertion
                cout<<"\n Enter Position:";
                cin>>pos;
                cout<<"\nEnter Element:";
                cin>>item;
                insertion(a,n,pos,item);
                break;
        case 3: cout<<"\n Enter Element to be deleted:";
                cin>>delitem;
                pos=lsearch(a,n,delitem);
                if(pos==-1)
                {
                cout<<"\n Element not found";
                }
                deletee(a,n,pos,delitem);
                break;
        case 4: cout<<"\n Enter the element to be searched";
                cin>>item;
                pos=lsearch(a,n,item);
                cout<<"\n Element found at index:"<<pos;
                cout<<"\n Element found at position"<<pos+1;
                break;
        default:cout<<"wrong choice";
        }
        cout<<"\n Do you want to continue?";
        cout<<"(Press y/n)";
        cin>>ch;
        }while(ch=='y');
getch();
}
void traversal(int b[],int N)
{
for(int i=0;i<N;i++)
cout<<b[i]<<" ";
}
// Insertion of element into a linear array with functions in c++
void insertion(int A[],int &N,int Pos,int ITEM)
{
for(int i=N;i>=Pos;i--)
A[i+1]=A[i];
A[Pos]=ITEM;
N=N+1;
}
// Deletion of element from linear array with functions in c++
void deletee(int A[],int &N,int Pos,int ITEM)
{
for(int i=Pos;i<N;i++)
A[i]=A[i+1];
N=N-1;
cout<<ITEM<<" is deleted from the array.";
}
int lsearch(int A[],int N,int ITEM)
{
int index=-1;
for(int i=0;i<N;i++)
{
if(A[i]==ITEM)
{
index=i;
}
}
return index;
}
