//1^2+2^2+3^2.....+n^2;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num,sum=0;
    cout<<"Enter the last number: ";
    cin>>num;
    for(float i=1;i<=num;i++)
    {
        sum+=i*i;
    }
    cout<<sum;
}