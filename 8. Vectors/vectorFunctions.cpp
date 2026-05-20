#include <iostream>
#include <vector>
using namespace std;





// Size function..  size()
// int main()
// {
//     vector<int> vec = {1, 2, 3, 45, 45, 33};
//     cout << "Size of vector is :" << vec.size() << endl;
//     return 0;
// }





// Push back function..  push_back()  It is used to enter elements at the end of the vector..
// int main()
// {
//     vector<int>vec;
//     cout<<"Before entering any element the size of vector is:"<<vec.size()<<endl;

//     vec.push_back(10);
//     vec.push_back(12);
//     vec.push_back(40);

//     cout<<"After push back the size of a vector: "<<vec.size()<<endl;

//     for(int val:vec){
//         cout<<val<<" ";
//     }
//     return 0;
// }





// Pop back function..  pop_back()   It is used to remove element from the end of the vector..
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector:";
//     cin >> n;

//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element:";
//         cin >> vec[i];
//     }
//     cout << "size of vector:" << vec.size() << endl;

//     vec.pop_back();
//     vec.pop_back();
//     cout << "Size of vector after pop back:" << vec.size() << endl;
//     for (int val : vec)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }




//Front and Back functions..  front(), back()   Front is used to get the first element of the vector and Back is used to get last element of the vector..
// int main(){
//     int n;
//     cout<<"Enter the size of the vector:";
//     cin>>n;
//     vector<int>vec(n);
//     for(int i=0;i<n;i++){
//         cout<<"Enter the element:";
//         cin>>vec[i];
//     }

//     cout<<"First element is:"<<vec.front()<<endl;
//     cout<<"Last element is:"<<vec.back()<<endl;
//     return 0;

// }





//At function..  at()   It is used to access the element of ith index..
int main(){
    int n;
    cout<<"Enter the size of a vector:";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>vec.at(i);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element at "<<i<<"th index is:"<<vec.at(i)<<endl;
    }
    return 0;
} 
