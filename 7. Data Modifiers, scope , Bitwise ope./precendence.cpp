/*
1. !,++,--      R to L
2. *,/,5        L to R
3. +,-          L to R
4. <,<=,>,>=    L to R
5. ==,!=        L to R
6. &&           L to R
7. ||           L to R
8.=(assignment) R to L
*/


#include<iostream>
using namespace std;

int main(){
    int cal=2*4%56^3-2;
    cout<<cal<<endl;
    return 0;
}
