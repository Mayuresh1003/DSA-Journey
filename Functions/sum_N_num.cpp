#include <iostream>
using namespace std;

void sumOfN(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    cout << "Sum of " << n << " number is: " << sum;
}

// int sumOfN(int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=i;
//     }
//     return sum;
// }

int main()
{
    int N;
    cout << "Enter a value of N:";
    cin >> N;

    sumOfN(N);
    return 0;
}
