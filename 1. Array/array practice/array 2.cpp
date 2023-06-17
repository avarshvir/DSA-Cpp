#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"enter the size of array : ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int j=0;j<size;j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}
