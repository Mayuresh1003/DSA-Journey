#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&num,int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }

}

int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>vec[i];
    }

    reverse(vec,n);

    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}