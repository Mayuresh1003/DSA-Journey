//Binary to Decimal..

#include<iostream>
using namespace std;

void BinaryToDec(int binary){
    int ans=0;
    int pow=2;
    while(binary>0){
        int rem =binary%10;
        binary=binary/10;

        ans=ans+(rem*pow);
        pow=pow*2;
    }
    cout<<"The Decimal of "<<binary<<" is: "<<ans;
}

int main(){
    int n;
    cout<<"Enter a binary number:";
    cin>>n;
    BinaryToDec(n);
    return 0;
}
