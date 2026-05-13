#include <iostream>
using namespace std;

int minOf2Num(int a, int b) // Parameters
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    int A, B;
    cout << "Enter a value of A:";
    cin >> A;
    cout << "Enter a value of B:";
    cin >> B;
    cout << minOf2Num(A, B) << " is minimum"; // Arguments

    return 0;
}