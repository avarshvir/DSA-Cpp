#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter array elemets : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
	cout<<endl<<"largest element = "<<arr[0];
return 0;
}

