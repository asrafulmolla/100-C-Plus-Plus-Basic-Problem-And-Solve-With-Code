#include<bits/stdc++.h>
using namespace std;
int main()
{
    double c,f;
    cout<<"Enter value of temperature in farenheit scale: ";
    cin>>f;
    c=(f-32)/1.8;
    cout<<showpoint<<fixed<<setprecision(2)<<c;

}