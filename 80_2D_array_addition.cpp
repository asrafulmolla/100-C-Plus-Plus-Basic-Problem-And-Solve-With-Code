#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Enter of array size: ";
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cin>>a[i][j];
        sum+=a[i][j];
        }
    }
    cout<<sum;
    
}