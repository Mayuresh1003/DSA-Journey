/*
  1 1 1 1
    2 2 2
      3 3
        4
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a value of N: ";
//     cin >> n;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << num << " ";
//         }
//         num++;
//         cout << endl;
//     }
//     return 0;
// }

// For characters..

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value of N:";
    cin >> n;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}
