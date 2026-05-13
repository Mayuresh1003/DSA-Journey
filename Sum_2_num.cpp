#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int main()
{
    int result = sum(9, 80);
    cout << result << "\n";
    return 0;
}