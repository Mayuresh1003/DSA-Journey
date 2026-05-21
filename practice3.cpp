//WAF to calculate the sum of all numbers of an array..

#include<iostream>
using namespace std;

void sumArray(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans+arr[i];
	}
	cout<<"The sum is: "<<ans<<endl;
} 

int main(){
	int n;
	cout<<"Enter the size of an array:";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter a values:";
		cin>>arr[i];
	}
	
	sumArray(arr,n);
	return 0;
	
	
}
