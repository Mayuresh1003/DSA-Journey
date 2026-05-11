// WAP to print factorial of n numbers..

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int fact = 1;

    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}