// WAF to print all prime numbers from 1 to Nth..

#include <iostream>
using namespace std;

void printPrime(int num)
{
    
    for (int i = 2; i <= num; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a value of N:";
    cin>>n;

    printPrime(n);
    return 0;
}