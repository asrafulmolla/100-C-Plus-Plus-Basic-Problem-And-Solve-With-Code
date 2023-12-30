#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/