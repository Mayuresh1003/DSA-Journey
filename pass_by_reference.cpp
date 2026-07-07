#include<iostream>
using namespace std;


// Pass by reference by using Pointer..
int Change(int *ptr){
    *ptr = 20;
}

int main(){
 int a = 10;

 Change(&a);

 cout<<"The value of A after change: "<<a<<endl;

 return 0;
}


// Pass by reference by using Alice..
// void Change(int &b){
//  b=20;
// }

// int main(){
//     int a = 10;

//     Change(a);

//     cout<<"After changing A is :"<<a<<endl;

//     return 0;
// }

