#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"Num1 is big";
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<"Num2 is big";
    }
    else
    {
        cout<<"Num3 is big";
    }
}