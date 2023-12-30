//1+3+5.....+n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the last odd number: ";
    cin>>num;
    for(int i=1;i<=num;i+=2)
    {
        sum+=i;
    }
    cout<<sum;
}