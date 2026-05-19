#include<iostream>
using namespace std;

int main(){
int a;
int b;
cout<<"Enter a vaalue of A: ";
cin>>a;
cout<<"Enter a value of B: ";
cin>>b;

cout<<"AND bitwise: "<<(a&b)<<endl;//AND bitwise operator

cout<<"OR bitwise: "<<(a|b)<<endl;//OR bitwise operator

cout<<"X-OR bitwise: "<<(a^b)<<endl;//X-OR bitwise operator

cout<<"Left-shift operator:"<<"A="<<(a<<2)<<endl<<"                    B="<<(b<<1)<<endl;//Left-shift operator

cout<<"Right-shit operator:"<<"A="<<(a>>1)<<endl<<"                    B="<<(b>>1)<<endl;//Right-shift operator
return 0; 

}

