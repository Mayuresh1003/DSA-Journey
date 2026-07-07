#include <iostream>
using namespace std;

// Array itself is  a constant pointer , we can not change the value of elements stored in array by using pointer operationns ..


int main()
{
    int arr[] = {10, 2, 3, 4, 5};

    cout<< arr << endl;
    cout<< *arr <<endl ;

    return 0;
}
