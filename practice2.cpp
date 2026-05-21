//WAP to find the largest among all the values of the array.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;
	
	int arr[n];
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter the value of "<<i<<"th index:";
		cin>>arr[i];
	}
	cout<<endl;
	
	int ans=INT_MIN;
	int ansIndex=-1;
	int i=0;
	for( i=0;i<n;i++){
		if(arr[i]>ans){
			ans=arr[i];
			ansIndex=i;
			
          }
//            OR

//      ans=max(arr[i],ans);
	
	}
	cout<<"Largest among all the values of the array is:"<<ans<<" at "<<ansIndex<<"index.."<<endl;
} 
