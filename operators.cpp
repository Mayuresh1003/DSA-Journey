#include<iostream>
using namespace std;

int main(){
    // Arithmetic operators
        int a=10;
        int b=5;

        cout<<"Sum:"<<a+b<<endl;
        cout<<"subtraction:"<<a-b<<endl;
        cout<<"Multiplication:"<<a*b<<endl;
        cout<<"Division:"<<a/b<<endl;
        cout<<"Modulus:"<<a%b<<endl;
 
 
    // Relational operators

        cout<<"\n"<<(3>2)<<endl;
        cout<<(5<10)<<endl;
        cout<<(7 == 7)<<endl;
        cout<<(7!=7)<<endl;
        cout<<(5<=11)<<endl;
        cout<<(6>=6)<<endl;

    // Logical operators

        cout<<"\n"<<((3>4) || (4<5))<<endl;
        cout<<((2<6) && (5>1))<<endl;
        cout<<!(4>5)<<endl;

    // Unary operators
      //increment
           //post increment
                int c=10;
                int d = c++;

                cout<<"\nd: "<<d<<endl;
                cout<<"c: "<<c<<endl;
           //pre increment
                int e = 10;
                int f =++e;

                cout<<"\nf: "<<f<<endl;
                cout<<"e: "<<e<<endl;
       //decrement
          //post decrement 
                int g = 10;
                int h = g--;

                cout<<"\nh: "<<h<<endl;
                cout<<"g: "<<g<<endl;
          //pre decrement
                int i = 10;
                int j = --i;

                cout<<"\nj: "<<j<<endl;
                cout<<"i: "<<i<<endl;



    return 0;
}