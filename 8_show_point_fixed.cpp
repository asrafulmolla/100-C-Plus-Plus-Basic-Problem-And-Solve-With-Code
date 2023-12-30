#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,sum;
    cin>>a>>b;
    sum=a+b;
    cout<<showpoint<<fixed<<setprecision(2)<<sum; //after point 2 digit fixed
}