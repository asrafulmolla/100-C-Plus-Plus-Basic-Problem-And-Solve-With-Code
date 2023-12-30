#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double a,b,sum;
    int  c,d;
    cout<<"Enter the values of a,b,c,d: ";
    cin>>a>>b>>c>>d;
    sum=a+b;
    cout<<"Addition = "<<sum<<endl;
    sum=a-b;
    cout<<"subtraction = "<<sum<<endl;
    sum=a*b;
    cout<<"Maltiply = "<<sum<<endl;
    sum=a/b;
    cout<<"Devied = "<<sum<<endl;
    sum=c%d;
    cout<<"Modolus = "<<sum<<endl;
    getch();
}