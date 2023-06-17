#include<iostream>
using namespace std;
int main()
{
	int n,i,j,t;
	int arr[20];
	cout<<"enter the size of array: ";
	cin>>n;
	cout<<"enter the elements of array: "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]>arr[j+1]){
				t=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	cout<<"elements arranged in ascending order: "<<endl;
	for(i=1;i<=n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
