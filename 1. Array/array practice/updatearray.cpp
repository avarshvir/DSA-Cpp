#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"array elements before updation"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int item;
	cout<<"enter the no. to update in array : ";
	cin>>item;
	int pos;
	cout<<"enter position to insert the element :";
	cin>>pos;
	cout<<endl;
	arr[pos-1]=item;
	cout<<"array element after updation : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
