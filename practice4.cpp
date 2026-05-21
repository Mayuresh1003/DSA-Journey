//WAF to swap the maximum number with minimum number of an array..

#include<iostream>
using namespace std;

void swapMIN_MAX(int arr[],int size) {
	int maximum=INT_MIN;
	int maxindex=-1;
	for(int i=0; i<size; i++) {
		if(arr[i]>maximum) {
			maximum=arr[i];
			maxindex=i;
		}
	}
	int minindex=-1;
	int minimum=INT_MAX;
	for(int i=0; i<size; i++) {
		if(arr[i]<minimum) {
			minimum=arr[i];
			minindex=i;
		}
	}
	swap(arr[maxindex],arr[minindex]);
}

int main() {
	int n;
	cout<<"Enter the size of an array:";
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++) {
		cout<<"Enter the value:";
		cin>>arr[i];
	}

	swapMIN_MAX(arr,n);
	cout<<"After swaping minimum and maximum number: ";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
