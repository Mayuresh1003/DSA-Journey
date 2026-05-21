//We want find 8 from all values in array..

#include<iostream>
using namespace std;

void search(int arr[],int size,int find){
	bool isFound = false;
	int index=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==find){
			isFound = true;
			index =i;
			break;
		}
	}
	if(isFound == true){
		cout<<"We found the "<<find<<" at index "<<index<<endl;
	}else{
		cout<<"Not found!!"<<endl;
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
	int x;
	cout<<"Enter what you want to find: ";
	cin>>x;
	search(arr,n,x);
	return 0;
}
