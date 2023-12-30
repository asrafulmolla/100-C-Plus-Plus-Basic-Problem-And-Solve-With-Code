//1+1/2+1/3.....+1/n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num,sum=0;
    cout<<"Enter the last number: ";
    cin>>num;
    for(float i=1;i<=num;i++)
    {
        sum=sum+(1/i);
    }
    cout<<sum;
}