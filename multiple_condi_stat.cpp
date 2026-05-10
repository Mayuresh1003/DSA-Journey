#include<iostream>
using namespace std;

int main(){

    int marks;

    cout<<"Enter your marks: ";
    cin>>marks;

    if(90<=marks<=100){
        cout<<"Grade A.."<<endl;

    }
    else if (80<=marks<90){
        cout<<"Grade B"<<endl;
    }
    else if(70<=marks<80){
        cout<<"Grade C"<<endl;
    }
    else if(0<=marks<70){
        cout<<"Grade F"<<endl;
    }
    else{
        cout<<"Invalid marks. Please enter marks between 0 and 100.."<<endl;
    }
    return 0;
}