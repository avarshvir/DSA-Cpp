#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	int arr[size];
	cout<<"enter the roll no"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"reverse order of roll. no: "<<endl;
	for(int j=size-1;j>=0;j--){
		cout<<arr[j]<<endl;
	}
	return 0;
}
