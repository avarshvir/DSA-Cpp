#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"enetr the size of array : ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int ins;
	cout<<"enetr new element to insert : ";
	cin>>ins;
	arr[i]=ins;
	cout<<"new array be like : ";
	for(i=0;i<n+1;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
