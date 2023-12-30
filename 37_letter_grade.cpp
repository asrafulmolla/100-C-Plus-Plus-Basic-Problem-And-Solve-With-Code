#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num>100)
    {
        cout<<"Invalid mark";
    }
    else{
         if(num>=80)
    {
        cout<<"A+";
    }
    else if(num>=70)
    {
        cout<<"A";
    }
    else if(num>=60)
    {
        cout<<"A-";
    }
    else if(num>=50)
    {
        cout<<"B";
    }
    else{
        cout<<"Fail";
    }
    }
   
}