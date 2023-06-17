#include<iostream>
using namespace std;
int main(){
	int n,i;
	int arr[100];
	cout<<"enter the elements : "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"before inserted"<<endl;
	for(i=0;i<n;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	for(i=n-1;i>=n;i--){
		arr[i+1]=arr[n];
	}
	int element;
	cout<<"eneter element to inserted";
cin>>element;
	arr[i]=element;
	for(i=0;i<n+1;i++){
		cout<<"arr["<<i<<"]"<<arr[i]<<endl;
	}
}
