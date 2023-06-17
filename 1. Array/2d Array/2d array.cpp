#include<iostream>
using namespace std;
int main(){
	int arr[3][3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++)
		cin>>arr[i][j][k];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++)
		cout<<"arr["<<i<<" "<<j<<" "<<k<<"] = "<<arr[i][j][k]<<endl;
		}
	}
	cout<<endl;
	cout<<endl;
	arr[1][0][1]=102;
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++)
		cout<<"arr["<<i<<" "<<j<<" "<<k<<"] = "<<arr[i][j][k]<<" ";
		}
	}
}
