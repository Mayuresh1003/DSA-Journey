#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    (num>=0)?cout<<"Number is positive..":cout<<"Number is negative.."<<endl;//method one

    cout<<(num>=0?"Positive..":"Negative..")<<endl;//method two
    return 0;
    
}