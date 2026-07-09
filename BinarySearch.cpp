#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int st = 0;
    int end = arr.size() - 1;
    int mid = 0;

    while (st <= end)
    {
        mid = (st + end) / 2;

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 5, 9, 13, 45, 78};
    int target1 = 45;

    vector<int> arr2 = {-1, 2, 6, 8, 14, 23, 58, 96};
    int target2 = 6;

    cout << binarySearch(arr1, target1) << endl;

    return 0;
}