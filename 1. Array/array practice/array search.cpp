#include<iostream>
using namespace std;
int main(){
	int n,t,i;
	cout<<"enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"enter "<<n<<"elements : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the no. to search in array : "<<endl;
	cin>>t;
	for(i=0;i<n;i++){
		if(arr[i]==t){
			cout<<"index of element : "<<i<<endl;
			cout<<"position of element : "<<i+1<<endl;
			break;
		}
	} 
	if(i==n){
		cout<<"element not found"<<endl;
	}
	return 0;
}
