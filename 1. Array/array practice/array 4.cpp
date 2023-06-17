#include<iostream>
using namespace std;
int main(){
	int test=5,testnum,a;
	double total=0;
	double avg;
	testnum=0;
	int testscore[test];
	cout<<"enetr 1st test or 999 to quit ";
    cin>>testscore[testnum];	
	while(testnum<test && testscore[testnum] != 999){
		total+=testscore[testnum];
		++testnum;
		if(testnum<test){
			cout<<"enter next test score or 999 to quit ";
			cin>>testscore[testnum];
		}
			}
	cout<<"the entered test score are: ";
	for(a=0;a<testnum;a++)
	cout<<testscore[a]<<" ";
	avg=total/testnum;
	cout<<"the average is "<<avg<<" ";
}
