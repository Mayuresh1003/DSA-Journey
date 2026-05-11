// WAP to check if entered number is prime or not..

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter any number : ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++)
    { // OR for(i=2;i*i<=n;i++)
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Number is prime.." << endl;
    }
    else
    {
        cout << "Number is not prime..";
    }

    return 0;
}
