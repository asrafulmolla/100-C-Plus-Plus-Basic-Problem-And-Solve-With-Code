#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,rem;
    cin>>num1>>num2;
    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    cout<<"GED = "<<num1;
}