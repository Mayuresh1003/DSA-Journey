/*
1. long
2. long long
3. short
4. signed
5. unsigned
*/
#include<iostream>
using namespace std;

int main(){
    cout<<sizeof(int)<<endl;

    cout<<sizeof(long int)<<endl;

    cout<<sizeof(long long int)<<endl;

    cout<<sizeof(short int)<<endl;

    unsigned int x=11322;//can store only positive numbers. If we give negative number than it return wrong value..
    signed int y=-23;//can store both negative and positive numbers..
   cout<<x<<"  "<<y<<endl;
    return 0;

}
