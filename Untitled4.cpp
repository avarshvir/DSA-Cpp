#include<iostream>
using namespace std;
int insert();
int del();
int insert(){
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos;
	cout<<"postion";
	cin>>pos;
	int ele;
	cout<<"element";
	cin>>ele;
	if(pos>n)
	cout<<"invalod";
	else{
		for(i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
		arr[pos-1]=ele;
		cout<<"array after insertion \n";
		for(i=0;i<=n;i++)
		cout<<arr[i]<<" ";
	}
}
int del(){
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos;
	cout<<"postion";
	cin>>pos;
	if(pos>=n+1)
	cout<<"not possible";
	else{
		for(i=pos-1;i<pos-1;i++)
		arr[i]=arr[i+1];
		cout<<"array after deletion \n";
		for(i=0;i<n-1;i++)
		cout<<arr[i]<<" ";
	}
}
int main(){
	insert();
	cout<<"------"<<endl;
del();	
}
