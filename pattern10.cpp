// Floyd's Triangle pattern

/*
  1
  2 3
  4 5 6
  7 8 9 10
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 1;
//     int n;
//     cout << "Enter a value of N: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// For character

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int n;
    cout << "Enter a value of N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}