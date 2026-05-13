// WAF to print Nth fibonacci series..
#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < num-2; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main(){
    int n;
    cout<<"Enter a value of N:";
    cin>>n;

    fibonacci(n);
    return 0;
}