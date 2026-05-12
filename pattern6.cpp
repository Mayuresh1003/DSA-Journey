/*
   1
   2 2
   3 3 3
   4 4 4 4
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int n;
    cout << "Enter a value of N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    return 0;
}