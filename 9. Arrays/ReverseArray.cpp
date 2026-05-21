#include<iostream>
using namespace std;

void reverse(int arr[],int size){
	int start=0;
	int end=size-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start=start+1;
		end=end-1;
	}
}

int main(){
	int n;
	cout<<"Enter a size of array:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter value: ";
		cin>>arr[i];
	}
	
	reverse(arr,n);cout<<"Reversed array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
