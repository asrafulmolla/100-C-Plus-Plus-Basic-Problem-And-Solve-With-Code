#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("Student.txt",ios::out|ios::app);//append
    cout<<"Enter your name: ";
    getline(cin,name);
    file<<name<<endl;
    
    file.close();
    cout<<"Data is Stored"<<endl;
}