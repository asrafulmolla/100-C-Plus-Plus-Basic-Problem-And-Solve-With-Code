#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,sum;
    cin>>a>>b;
    sum=a+b;
    cout<<showpoint<<setprecision(10)<<sum; //before and after point total 10 digit print
}