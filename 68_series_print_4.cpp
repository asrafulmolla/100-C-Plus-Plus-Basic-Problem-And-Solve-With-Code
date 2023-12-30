//1^5+2^5+3^5.....+n^5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num,sum=0;
    cout<<"Enter the last number: ";
    cin>>num;
    for(float i=1;i<=num;i++)
    {
        sum+=pow(i,5);
    }
    cout<<sum;
}