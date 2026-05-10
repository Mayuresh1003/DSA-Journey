// WAP to sum of all numbers from 1 to n which is dividible by 3..

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}