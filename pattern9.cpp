/*
  1
  2 1
  3 2 1
  4 3 2 1
*/

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter a value of N: ";
// cin>>n;

// for(int i=0;i<n;i++){
//     int num=i+1;
//     for(int j=0;j<=i;j++){
//         cout<<num<<" ";
//         num--;
//     }
//     cout<<endl;
// }
// return 0;

// }

/*
A
B A
C B A
D C B A
*/

// For characters..

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }
    return 0;
}