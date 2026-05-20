#include <iostream>
#include <vector>
using namespace std;

void Search(vector<int> &num, int size, int toFind)
{
    int index = -1;
    bool isFound = false;
    for (int i = 0; i < size; i++)
    {
        if (toFind == num[i])
        {
            isFound = true;
            index = i;
            break;
        }
    }

    if (isFound == true)
    {
        cout << "We found the element: " << toFind << " at index: " << index << endl;
    }
    else
    {
        cout << "Not exists in vector!!!";
    }
}

int main()
{
    int n;
    cout << "Enter the size of vector:";
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter an element:";
        cin >> vec[i];
    }

    int x;
    cout << "Enter element to find:";
    cin >> x;

    Search(vec, n, x);
    return 0;
}