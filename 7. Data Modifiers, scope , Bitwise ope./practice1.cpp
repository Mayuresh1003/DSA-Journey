// WAP to find if a number is power of 2 or not..
#include <iostream>
using namespace std;

void checkPower2(int num)
{
    bool power2 = true;
    if (num <= 0)
    {
        power2 = false;
    }
    else
    {
        while (num > 1)
        {
            if (num % 2 != 0)
            {
                power2 = false;
                break;
            }
            else
            {
                num = num / 2;
            }
        }
    }
    if(power2==false){
        cout<<"Number is not in power of 2..";
    }else{
        cout<<"Number is in power of 2..";
    }
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    checkPower2(n);
    return 0;
}
