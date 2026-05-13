//WAP to calculate nCr binomial coefficient for n&r..


// #include<iostream>
// using namespace std;


// double Factorial(int n){
//     double fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }


// int main(){
//     int n;
//     cout<<"Enter a value of N:";
//     cin>>n;

//     int r;
//     cout<<"Enter a value of R:";
//     cin>>r;

//     int f=n-r;
//    double result=Factorial(n)/(Factorial(r)*Factorial(f));
//     cout<<result<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

double Factorial(int num){
    double fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

double nCr(int n,int r){
    double fact_n=Factorial(n);
    double fact_r=Factorial(r);
    double fact_nMr=Factorial(n-r);
    double result = fact_n/(fact_r*fact_nMr);
    return result;
}


int main(){
int n,r;
cout<<"Enter a value of N: ";
cin>>n;
cout<<"Enter a value of R: ";
cin>>r;
cout<<"nCr is: "<<nCr(n,r)<<endl;
return 0;
} 