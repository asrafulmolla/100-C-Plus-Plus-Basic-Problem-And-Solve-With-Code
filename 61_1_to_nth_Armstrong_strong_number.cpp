#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rem,sum,temp;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum=0;
        int n=i;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+(rem*rem*rem);
        }//cout<<sum;

    }
    cout<<sum;

}