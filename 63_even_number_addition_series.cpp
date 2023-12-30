//2+4+6.....+n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the last even number: ";
    cin>>num;
    for(int i=2;i<=num;i+=2)
    {
        sum+=i;
    }
    cout<<sum;
}