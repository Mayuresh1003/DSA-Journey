#include<iostream>
using namespace std;

int main(){
    double a= 10;
    int b = 20;
    double* ptr = &a;
    int* ptr2 = &b;

    cout<<"Pointer's value before increment :"<<ptr<<endl;
    cout<<"Pointer2 Before :"<<ptr2<<endl;

    ptr++;
    ptr2 = ptr2 + 3;

    cout<<"Pointer's value after increment: "<<ptr<<endl;
    cout<<"Pointer2 After :"<<ptr2<<endl;

    return 0;
    
}