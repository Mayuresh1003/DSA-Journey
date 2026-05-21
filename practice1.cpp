//WAP to find smallest among all the values in array..

#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter the sizeof an array:";
	cin>>n;

	int num[n];

	for(int i=0; i<n; i++) {
		cout<<"Enter "<<i<<"th index value:";
		cin>>num[i];
	}
	cout<<endl;
	int ans= INT_MAX;
	int ansIndex=-1;
	for(int i=0; i<n; i++) {

   	if(num[i]<ans){
   		ans =num[i];
   		ansIndex=i;
	   }

//            or

//		ans =min(num[i],ans);

	}
	cout<<"Smallest value among all of this is:"<<ans<<" at "<<ansIndex<<" index..";
}
