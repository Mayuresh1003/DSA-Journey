#include<iostream>
using namespace std;

int x=10;//Global variable..

void function(){
    int x=5;//local variable..
    cout<<"Local variable: "<<x<<endl;
}

int main(){
    function();//print local variable of function.
    cout<<"Global variable: "<<x;//print global variable.
    return 0;

}