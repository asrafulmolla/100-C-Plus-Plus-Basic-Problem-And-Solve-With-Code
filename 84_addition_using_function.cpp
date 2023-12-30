#include<bits/stdc++.h>
using namespace std;
void add(int a, int b)
{
    int sum=a+b;
    int sum1=a-b;
    int sum2=a*b;
    float sum3=a/b;
    int sum4=a%b;
    cout<<sum<<endl;
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    cout<<sum3<<endl;
    cout<<sum4<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    add(x,y);
}