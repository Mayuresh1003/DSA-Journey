#include<iostream>
using namespace std;

int main(){
    //Ways  to  declare array..

    int marks1[]={99,78,67,45};
    int marks2[3]={67,78,99};
   
    cout<<marks1[0]<<endl;
    cout<<marks2[2]<<endl;
    cout<<endl;

    for(int i=0;i<4;i++){
        cout<<marks1[i]<<endl;
    }

    cout<<sizeof(marks1)<<endl;
return 0;    
}
