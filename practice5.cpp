//WAF to print all the unique numbers of an array..

#include<iostream>
using namespace std;


void unique(int arr[],int size){
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
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
		cout<<"Enter a value:";
		cin>>arr[i];
	}
	
	unique(arr,n);

return 0;
}
