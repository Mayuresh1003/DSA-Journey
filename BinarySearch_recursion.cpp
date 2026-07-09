#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &vec, int tar, int st, int end)
{
    if (st > end)
    {
        return -1;
    }
    int mid = st + (end - st) / 2;
    if (tar < vec[mid])
    {
        return binarySearch(vec, tar, st, mid - 1);
    }
    else if (tar > vec[mid])
    {
        return binarySearch(vec, tar, mid + 1, end);
    }
    else
    {
        return mid;
    }
}

int main()
{
    vector<int> vec = {-1, 0, 3, 5, 78, 90};
    int st = 0;
    int end = vec.size() - 1;

    int target = 90;

    cout << binarySearch(vec, target, st, end);
    return 0;
}