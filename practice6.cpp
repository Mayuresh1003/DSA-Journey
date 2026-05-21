//WAF to print intersaction of two arrays..
#include<iostream>
using namespace std;

void intersection(int arr[],int size,int arr1[],int size1){
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=0;j<size1;j++){
			if(arr[i]==arr1[j]){
				count=1;
				break;
			}
		}
		if(count==1){
			cout<<arr[i]<<" ";
		}
	}
}

int main(){
	int n;
	cout<<"Enter the size of an array:";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the value:";
		cin>>arr[i];
	}
	
	int m;
	cout<<"Enter the size of second array:";
	cin>>m;
	int arr1[m];
	for(int i=0;i<m;i++){
		cout<<"Enter the value:";
		cin>>arr1[i];
	}
	
	intersection(arr,n,arr1,m);
	return 0;
	
}
