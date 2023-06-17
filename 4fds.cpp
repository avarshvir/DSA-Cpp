#include<iostream>
using namespace std;
int find(int n, int arr[]);
int tran(int i);
int i,arr[100],n;
int main(){
	int ch;
	cout<<"select choice"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			find(n,arr);
			case 2:
				tran(i);
	}

}
int find(int n, int arr[]){
cout<<"enter size of array : ";
cin>>n;
cout<<"enter array element : ";
for(i=0;i<n;i++){
	cin>>arr[i];
}
int t;
cout<<"find"<<endl;
cin>>t;
for(i=0;i<n;i++){
	if(arr[i]==t){
		cout<<"index is "<<i<<endl;
		break;
	}
}
if(i==n){
	cout<<"not found";
}
}
int tran(int i){
cin>>n;
for(i=0;i<n;i++){
	cin>>arr[i];
}
for(i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
