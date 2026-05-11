// WAP to print sum of 1to n numbers..

#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter a number: ";
  cin >> n;
  int sum = 0;
  int i = 1;
  // for(int i=1;i<=n;i++){
  //     sum=sum+i;
  // }
  // cout<<sum<<endl;
  while (i <= n)
  {
    sum += i;
    i++;
  }
  cout << sum;

  return 0;
}
