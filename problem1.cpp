// WAP to find character is in lowercase or in uppercase.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any characterr:";
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"Entered character is in uppercase.."<<endl;

    }
    else if(ch>=97 && ch<=122){
        cout<<"Entered character is in lowercase.."<<endl;

    }
    else{

        cout<<"Enter valid character.."<<endl;

    }
    return 0;
}