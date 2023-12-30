#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int randomnumber=rand()%10; // fixed area 1 to 4...(n-1)
        cout<<"Random number = "<<randomnumber<<endl;
    }
}