//WAP to calculate the sum of a number's digits..

#include<iostream>
using namespace std;

void sumOfDigits(int num){
    int digitSum=0;
    while(num>0){
       int lastDigit=num%10;
        num /=10;
        digitSum=digitSum+lastDigit;
    }
    cout<<"The Sum of "<<num<<"'s digits is:"<<digitSum<<endl;
}

int main(){
int n;
cout<<"Enter any number: ";
cin>>n;

sumOfDigits(n);
return 0;


}