#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int guessnumber, randomenumber;
        cout<<"Enter your guess between 1 to 5: ";
        cin>>guessnumber;
        randomenumber= rand()%5+1;
        if(guessnumber == randomenumber) cout<<"You have won"<<endl<<endl;
        else cout<<"You have lost. Try again"<<endl<<"randomnumber was: "<<randomenumber<<endl<<endl;
    }
}