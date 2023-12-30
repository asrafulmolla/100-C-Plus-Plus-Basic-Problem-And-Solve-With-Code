//1*2*3*.......*n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=1;
    cout<<"Enter the last number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum*=i;
    }
    cout<<sum;
}