#include <iostream>
#include <vector> //For vector..

using namespace std;

int main()
{
    // Types to declare a vector..
    vector<int> vec;

    vector<int> vec1 = {1, 2, 3};

    vector<int> vec2(4, 1); // Here in bracket first number shows the size of vector(here 4) & second value shows what to store in every index(here 1)..

    cout << vec1[1] << endl;
    cout << vec2[2] << endl;
    return 0;
}
