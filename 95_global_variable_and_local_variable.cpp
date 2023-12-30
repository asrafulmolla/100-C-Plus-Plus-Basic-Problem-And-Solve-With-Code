#include<bits/stdc++.h>
using namespace std;
int x=10; //global variable
int main()
{
    int x=50; //local variable
    cout<<::x<<endl; //global variable print
    cout<<x<<endl; //local variable print
}