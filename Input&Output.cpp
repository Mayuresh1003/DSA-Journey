#include<iostream>
using namespace std;

int main() {
	int n=5;
	cout<<"Enter the size od Array:";
	cin>>n;

	int marks[n];
	cout<<endl;

	for(int i=0; i<n; i++) {
		cout<<"Enter "<<i<<"th value:";
		cin>>marks[i];
	}
	cout<<endl;
	for(int i=0; i<n; i++) {
		cout<<i<<"th value is:"<<marks[i]<<endl;
	}
	return 0;

}
