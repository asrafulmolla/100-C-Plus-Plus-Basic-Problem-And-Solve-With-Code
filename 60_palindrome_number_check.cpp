#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rem,sum=0,temp;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    if(num==sum)
    {
        cout<<"This is palindrom number";
    }
    else{
        cout<<"Not palindrome";
    }

}