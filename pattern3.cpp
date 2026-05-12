/* 1 2 3
   4 5 6
   7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num<<" ";
            num++;
        }
        cout << endl;
    }
    return 0;
}