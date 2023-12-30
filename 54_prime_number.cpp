#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"Enter any positive number: ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            count++;
            break;
        }

    }
    if(count==0)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not A prime number";
    }
}