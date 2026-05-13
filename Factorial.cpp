#include <iostream>
using namespace std;

void factOfN(double n)
{
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " number is :" << fact;
}

int main()
{
    double n;
    cout << "Enter a value of N:";
    cin >> n;

    factOfN(n);
    return 0;
}