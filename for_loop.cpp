#include <iostream>
using namespace std;

int main()
{

    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int j = 0; j <= n; j += 2)
    {
        cout << j << " ";
    }
    return 0;
}