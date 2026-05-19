//WAP to find number is in power of 2 or not without using loop..

#include<iostream>
using namespace std;

void checkPower2(int num){
    if((num>0) && ((num & (num-1))==0)){
        cout<<"Number is in power of 2.."<<endl;
    }
    else{
        cout<<"Number is not in power of 2.."<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    checkPower2(n);
    return 0;
}
