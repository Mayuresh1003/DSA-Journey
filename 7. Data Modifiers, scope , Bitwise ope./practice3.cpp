//WAF to reverse an integer..

#include<iostream>
using namespace std;

void reverseNum(int num){
    int ans=0;
   
    int original = num;
    while(num>0){
        int rem=num%10;
        
        ans =(ans*10)+rem;
        num=num/10;
        

    }
    cout<<"Reverse of a number "<<original<<" is: "<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    reverseNum(n);
    return 0;
}
