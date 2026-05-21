#include<iostream>
using namespace std;

void change(int arr[],int size){
	cout<<"In Function"<<endl;
	for(int i=0;i<size;i++){
		arr[i]=2*arr[i];
	}
}

int main(){
	int n;
	cout<<"Enter a size of an array: ";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter a value of "<<i<<"th index: ";
		cin>>arr[i];
	}
	
	change(arr,n);
	cout<<"\nIn main function.."<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
