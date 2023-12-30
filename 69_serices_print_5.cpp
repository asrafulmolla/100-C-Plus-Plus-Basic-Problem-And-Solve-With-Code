//1-2+3-4+5-6......+-n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,odd=0,even=0,result=0;
    cout<<"Enter the last number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(i%2==0) even+=i;
        else odd+=i;
    }
    result=odd-even;
    cout<<result;
}