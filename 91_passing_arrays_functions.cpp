#include<bits/stdc++.h>
using namespace std;
void displayarray(int num[],int size_)
{
    for(int i=0;i<=4;i++)
    {
        cout<<num[i]<<" ";
    }
}
int main()
{
    int number[5]={10,20,30,40,50};
    displayarray(number,5);
}