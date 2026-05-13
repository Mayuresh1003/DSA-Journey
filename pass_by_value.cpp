#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int sum;
    sum = a + b;
    cout << "Sum is " << sum << endl;
}
int main()
{
    int x = 10, y = 20;
    sum(x, y);
    return 0;
}9