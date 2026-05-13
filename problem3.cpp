// WAF to check the entered number is prime or not..

#include <iostream>
using namespace std;

void checkPrime(int num)
{
    bool isPrime = true;
    if (num > 1)
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    else
    {
       isPrime = false;
    }

    if (isPrime == false)
    {
        cout << "Entered Number is not prime.." << endl;
    }
    else
    {
        cout << "Entered Number is prime.." << endl;
    }
}

int main()
{

    int n;
    cout << "Enter any number:";
    cin >> n;

    checkPrime(n);
    return 0;
}