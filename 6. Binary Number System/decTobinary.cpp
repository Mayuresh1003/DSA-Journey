//Decimal to Binary..

#include<iostream>
using namespace std;

void DecToBinary(int num){
    int ans=0;
    int pow=1;
   while(num>0){
    int rem =num%2;
    num=num/2;
    ans = ans +(rem*pow);
    pow=pow*10;
   }
   cout<<"Binary of "<<num<<" is :"<<ans;
}

int main(){
    int n;
    cout<<"Enter a value of N:";
    cin>>n;

    DecToBinary(n);
    return 0;
}
