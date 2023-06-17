#include<iostream>
using namespace std;
void insert(int num, int pos);
int arr[100],n,z;
int main(){
 int k,num,pos;
 
 cout<<"eneter length";
 cin>>n;
 cout<<"array is :";
 for(k=0;k<n;k++){
 	cin>>arr[k];
 }

 cout<<"enter elemeny";
 cin>>num;
 cout<<"enter pos";
 cin>>pos;
 insert(num,pos);
return 1;
}
void insert(int num,int pos){
	for(int i=5;i>=pos;i--){
	arr[i]=arr[i-1];
	arr[i]=num;
	n++;
	cout<<(arr[i]=arr[i++]);
}
}
