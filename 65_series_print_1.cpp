//1.5+2.5+3.5.....+n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num,sum=0;
    cout<<"Enter the last number: ";
    cin>>num;
    for(float i=1.5;i<=num;i++)
    {
        sum+=i;
    }
    cout<<sum;
}